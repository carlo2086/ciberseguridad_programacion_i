
#include <iomanip>
#include <iostream>
#include <string>

#if defined(_WIN32)
#include <windows.h>

static ULONGLONG fileTimeAUint64(const FILETIME& ft) {
    ULARGE_INTEGER ui;
    ui.LowPart = ft.dwLowDateTime;
    ui.HighPart = ft.dwHighDateTime;
    return ui.QuadPart;
}

double obtenerUsoCPU() {
    FILETIME idle1 {}, kernel1 {}, user1 {};
    FILETIME idle2 {}, kernel2 {}, user2 {};

    if (!GetSystemTimes(&idle1, &kernel1, &user1)) {
        return -1.0;
    }

    Sleep(250);

    if (!GetSystemTimes(&idle2, &kernel2, &user2)) {
        return -1.0;
    }

    const ULONGLONG idle = fileTimeAUint64(idle2) - fileTimeAUint64(idle1);
    const ULONGLONG kernel = fileTimeAUint64(kernel2) - fileTimeAUint64(kernel1);
    const ULONGLONG user = fileTimeAUint64(user2) - fileTimeAUint64(user1);
    const ULONGLONG total = kernel + user;

    if (total == 0) {
        return 0.0;
    }

    return (1.0 - static_cast<double>(idle) / static_cast<double>(total)) * 100.0;
}

void imprimirCPU() {
    SYSTEM_INFO info {};
    GetSystemInfo(&info);

    std::cout << "Nucleos CPU       : " << info.dwNumberOfProcessors << "\n";

    const double uso = obtenerUsoCPU();
    if (uso < 0.0) {
        std::cout << "Uso CPU aprox.    : No disponible\n";
        return;
    }

    std::cout << "Uso CPU aprox.    : " << std::fixed << std::setprecision(2) << uso << " %\n";
}

void imprimirMemoria() {
    MEMORYSTATUSEX mem {};
    mem.dwLength = sizeof(mem);

    if (!GlobalMemoryStatusEx(&mem)) {
        std::cerr << "No se pudo obtener informacion de memoria.\n";
        return;
    }

    const double gb = 1024.0 * 1024.0 * 1024.0;
    const double total = mem.ullTotalPhys / gb;
    const double libre = mem.ullAvailPhys / gb;
    const double usada = total - libre;

    std::cout << "Memoria RAM total : " << std::fixed << std::setprecision(2) << total << " GB\n";
    std::cout << "Memoria RAM usada : " << usada << " GB\n";
    std::cout << "Memoria RAM libre : " << libre << " GB\n";
}

void imprimirDisco(const std::string& unidad) {
    ULARGE_INTEGER libreUsuario {}, total {}, libreTotal {};

    if (!GetDiskFreeSpaceExA(unidad.c_str(), &libreUsuario, &total, &libreTotal)) {
        std::cerr << "No se pudo leer el almacenamiento de " << unidad << "\n";
        return;
    }

    const double gb = 1024.0 * 1024.0 * 1024.0;
    const double totalGb = total.QuadPart / gb;
    const double libreGb = libreTotal.QuadPart / gb;
    const double usadoGb = totalGb - libreGb;

    std::cout << "Disco (" << unidad << ") total: " << std::fixed << std::setprecision(2) << totalGb << " GB\n";
    std::cout << "Disco (" << unidad << ") usado: " << usadoGb << " GB\n";
    std::cout << "Disco (" << unidad << ") libre: " << libreGb << " GB\n";
}

void imprimirTiempoEncendido() {
    const ULONGLONG ms = GetTickCount64();
    const ULONGLONG horas = ms / (1000ULL * 60ULL * 60ULL);
    std::cout << "Tiempo encendido   : " << horas << " horas aprox.\n";
}

int main() {
    std::cout << "=== MONITOR DE RECURSOS DEL SISTEMA (WINDOWS) ===\n";
    imprimirCPU();
    imprimirMemoria();
    imprimirDisco("C:\\");
    imprimirTiempoEncendido();

    return 0;
}

#elif defined(__linux__)
#include <sys/statvfs.h>
#include <sys/sysinfo.h>
#include <unistd.h>

void imprimirMemoria(const struct sysinfo& info) {
    const double gb = 1024.0 * 1024.0 * 1024.0;
    const double total = (info.totalram * info.mem_unit) / gb;
    const double libre = (info.freeram * info.mem_unit) / gb;
    const double usada = total - libre;

    std::cout << "Memoria RAM total : " << std::fixed << std::setprecision(2) << total << " GB\n";
    std::cout << "Memoria RAM usada : " << usada << " GB\n";
    std::cout << "Memoria RAM libre : " << libre << " GB\n";
}

void imprimirCPU(const struct sysinfo& info) {
    const int cores = static_cast<int>(sysconf(_SC_NPROCESSORS_ONLN));
    std::cout << "Nucleos CPU       : " << cores << "\n";
    std::cout << "Carga media 1 min : " << std::fixed << std::setprecision(2)
              << (info.loads[0] / 65536.0) << "\n";
}

void imprimirDisco(const std::string& ruta) {
    struct statvfs fs {};
    if (statvfs(ruta.c_str(), &fs) != 0) {
        std::cerr << "No se pudo leer el almacenamiento de " << ruta << "\n";
        return;
    }

    const double gb = 1024.0 * 1024.0 * 1024.0;
    const double total = (fs.f_blocks * fs.f_frsize) / gb;
    const double libre = (fs.f_bfree * fs.f_frsize) / gb;
    const double usada = total - libre;

    std::cout << "Disco (" << ruta << ") total: " << std::fixed << std::setprecision(2) << total << " GB\n";
    std::cout << "Disco (" << ruta << ") usado: " << usada << " GB\n";
    std::cout << "Disco (" << ruta << ") libre: " << libre << " GB\n";
}

int main() {
    struct sysinfo info {};
    if (sysinfo(&info) != 0) {
        std::cerr << "No se pudo obtener informacion del sistema.\n";
        return 1;
    }

    std::cout << "=== MONITOR DE RECURSOS DEL SISTEMA (LINUX) ===\n";
    imprimirCPU(info);
    imprimirMemoria(info);
    imprimirDisco("/");
    std::cout << "Tiempo encendido   : " << info.uptime / 3600 << " horas aprox.\n";

    return 0;
}

#else
int main() {
    std::cerr << "Este ejemplo esta implementado para Windows y Linux.\n";
    return 1;
}
#endif