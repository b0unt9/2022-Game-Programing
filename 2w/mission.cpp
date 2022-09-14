#include <stdio.h>

int main()
{
    char c[2] = {
        0,
    };

    while (1) {
        fgets(c, 2, stdin);
        if (c[0] == '\n')
            break;
    }

    printf("OUT");
    return 0;
}