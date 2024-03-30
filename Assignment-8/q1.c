#include <stdio.h>

int main() {

    int add(int a, int b);
    int sub(int a, int b);
    int mul(int a, int b);
    int div(int a, int b);

    int a, b;
    int op;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf ("1. +\n");
    printf ("2. -\n");
    printf ("3. *\n");
    printf ("4. /\n");

    do {
        printf(">");
        scanf("%d", &op);
    } while (op < 1 || op > 4);

    if (op == 4 && b == 0) {
        printf("Are you trying to divide by zero? You are under arrest!\n");
        return -1;
    }

    int res = 0;

    switch (op) {
    case 1:
        res = add(a, b);
        break;
    
    case 2:
        res = sub(a, b);
        break;

    case 3:
        res = mul(a, b);
        break;

    case 4:
        res = div(a, b);
        break;
    
    default:
        return -1;
    }

    printf("Result is %d\n", res);
}

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

int div(int a, int b) {
    return a / b;
}