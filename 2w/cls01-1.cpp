#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char string[20];
    char c;

    printf("문자열 입력 >");
    scanf("%s", string);
    fflush(stdin);

    printf("문자 입력 >");
    scanf("%c", &c);

    printf("%s\n", string);
    printf("!!%c!!\n", c);

    return 0;
}