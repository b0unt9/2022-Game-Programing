#include <stdio.h>
#include <windows.h>

void gotoxy(int x, int y);
int main(void)
{
    for (int x = 1; x <= 9; ++x) {
        for (int y = 1; y <= 9; ++y) {
            gotoxy(x * 10, y);
            printf("%d*%d=%2d", x, y, x * y);
        }
    }

    printf("\n");

    return 0;
}

void gotoxy(int x, int y)
{
    COORD Pos = { x - 1, y - 1 };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
