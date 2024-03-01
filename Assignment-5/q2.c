#include <stdio.h>

// Write a program to find whether a character  is  consonant  or  vowel  using  switch statement.

int main() {
    char c;
    printf("Enter a character to test: ");
    scanf("%c", &c);

    switch(c) {
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
            printf("%c is vowel\n", c);
            break;
        default:
            printf("%c is consonant\n", c);
            break;
    }

    return 0;
}