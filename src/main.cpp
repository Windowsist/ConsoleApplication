#include <windows.h>

int wmain(int argc,wchar_t** argv,wchar_t** envp)
{
    HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
    HANDLE in = GetStdHandle(STD_INPUT_HANDLE);
    LPCWSTR con = L"English\r\n中文 (简体)\r\n中文 (繁體)\r\n한국어\r\n😀😁😂🤣\r\ninput(8max):";
    WriteConsoleW(out, con, lstrlenW(con), 0, 0);
    wchar_t data[10];
    return 0;
}
