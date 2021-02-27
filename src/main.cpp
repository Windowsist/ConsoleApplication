#include <windows.h>

int wmain(int argc, wchar_t **argv, wchar_t **envp)
{
    HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
    HANDLE in = GetStdHandle(STD_INPUT_HANDLE);
    WriteConsoleW(out, L"English\r\n中文 (简体)\r\n中文 (繁體)\r\n한국어\r\n😀😁😂🤣\r\ninput(8max):", 54, 0, 0);
    wchar_t tmpdata[8];
    DWORD read;
    ReadConsoleW(in, tmpdata, 8, &read, 0);
    WriteConsoleW(out, tmpdata, read, 0, 0);
    return 0;
}
