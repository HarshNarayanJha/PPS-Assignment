#include <stdio.h>

int main() {
    char name[20];
    int roll;
    int m1, m2, m3;

    printf("Enter your name: ");
    scanf("%s", &name);
    printf("Enter your roll: ");
    scanf("%d", &roll);
    printf("Enter your marks in the three subjects: ");
    scanf("%d %d %d", &m1, &m2, &m3);

    int percent = (m1 + m2 + m3) / 3.0;

    printf("Hello %s, your roll No. is %d and you scored %d%\n", name, roll, percent);

    return 0;
}