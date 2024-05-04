#include <stdio.h>
#include <string.h>

int main() {
    char str[128];
    char c;

    fgets(str, 128, stdin);
    c = getc(stdin);

    int count = 0;

    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == c) {
            count++;
        }
    }

    if (count > 0) {
        printf("%d occurences", count);
    } else {
        printf("Didn't find the character!");
    }

    return 0;
}