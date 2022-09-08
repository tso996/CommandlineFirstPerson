
#include <iostream>
#include <Windows.h>

int nScreenWidth = 120;
int nScreenHeight = 40;

float fPlayerX = 0.0f;
float fPlayerY = 0.0f;
float fPlayerA = 0.0f;

int mMapHeight = 16;

int main(int argc, char* argv[])
{
    // Create screen buffer
    wchar_t* screen = new wchar_t[nScreenWidth * nScreenHeight];
    HANDLE hConsole = CreateConsoleScreenBuffer(GENERIC_READ
        | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
    
    SetConsoleActiveScreenBuffer(hConsole);
    DWORD dwBytesWritten = 0;

    wstring map;

    map += L"################";
    map += L"#--------------#";
    map += L"#--------------#";
    map += L"#--------------#";
    map += L"#--------------#";
    map += L"#--------------#";
    map += L"#--------------#";
    map += L"#--------------#";
    map += L"#--------------#";
    map += L"#--------------#";
    map += L"#--------------#";
    map += L"#--------------#";
    map += L"#--------------#";
    map += L"#--------------#";
    map += L"#--------------#";
    map += L"################";



    while (true) {
        screen[nScreenWidth * nScreenHeight - 1] = '\0';
        WriteConsoleOutputCharacter(hConsole, screen, nScreenWidth * nScreenHeight, { 0, 0 }, &dwBytesWritten);
    }


    return 0;
}


