#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char word[10] = "abcdedcba";
    int length = 9;
    bool res = true;

    for (int i = 0; i < strlen(word) / 2; i++) {
        if (word[i] != word[length - 1 - i]) {
            res = false;
            break;
        }
    }

    printf("%s\n", res ? "true" : "false");

    return 0;
}
