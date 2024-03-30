#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    printf("Enter a str to check palindrome: ");
    gets(str);

    char revstr[100];
    int j = 0;
    for (int i = strlen(str) - 1; i >= 0; --i, ++j) {
        revstr[j] = tolower(str[i]);
    }

    if (strcmp(str, revstr) == 0) {
        printf("String is palindrome");
    } else {
        printf("Not a palindrome");
    }
    return 0;
}
