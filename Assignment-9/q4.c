#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    printf("Enter a str to check palindrome: ");
    gets(str);

    char* ptr;
    char* revptr;

    ptr = str;

    while (*ptr != '\0') {
        ++ptr;
    }
    --ptr;

    for (revptr = str; ptr >= revptr;) {
        if (tolower(*ptr) == tolower(*revptr)) {
            --ptr;
            revptr++;
        } else break;
    }

    if (revptr > ptr) {
        printf("String is palindrome");
    } else {
        printf("Not a palindrome");
    }

    return 0;
}
