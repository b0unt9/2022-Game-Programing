#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char word[] = "abcdedcba";
    int length = strlen(word);
    bool res = true;

    for (int i = 0; i < length / 2; i++) {
        if (word[i] != word[length - 1 - i]) {
            res = false;
            break;
        }
    }

    printf("%s\n", res ? "true" : "false");

    return 0;
}
