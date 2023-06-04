#include <Windows.h>

int __stdcall WinMain(
    HINSTANCE hInstance,
    HINSTANCE hPrevInstance,
    LPSTR     lpCmdLine,
    int       nShowCmd
)
{
    while (true) {
        int p = 1;
        SystemParametersInfoW(SPI_SETSYSTEMLANGUAGEBAR, 0, &p, SPIF_SENDCHANGE);
        Sleep(10);
    }
}
