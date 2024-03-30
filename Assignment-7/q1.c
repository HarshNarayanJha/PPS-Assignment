#include <stdio.h>
#include <string.h>

int main() {
    char str[128];
    char c;

    fgets(str, 128, stdin);
    c = getc(stdin);

    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == c) {
            printf("Found The Character!");
            return 0;
        }
    }

    printf("Didn't find the character!");

    return 0;
}