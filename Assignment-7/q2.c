#include <stdio.h>
#include <string.h>

int main() {
    char str[128];

    fgets(str, 128, stdin);

    int vow_ct;
    vow_ct = 0;

    for (int i = 0; str[i] != '\0'; ++i) {
        switch (str[i]) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            vow_ct++;
            break;
        default:
            break;
        }
    }

    printf("%d vowels\n", vow_ct);

    return 0;
}