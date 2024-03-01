#include <stdio.h>

// Write  a  program  to  check  whether  a  number  is  positive,  negative  or  zero  using switch case

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    switch (n > 0) {
        case 1:
            printf("Number is +ve\n");
            break;
        case 0:
            switch (n < 0) {
                case 1:
                    printf("Number is -ve\n");
                    break;
                case 0:
                    printf("Number is 0\n");
                    break;
            }
    }

    return 0;
}
