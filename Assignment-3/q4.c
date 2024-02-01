#include <stdio.h>

int main() {

    int basic_salary;

    printf("Enter Basic Salary: ");
    scanf("%d", &basic_salary);

    int hra, da;

    if (basic_salary < 1500) {
        hra = 0.1 * basic_salary;
        da = 0.1 * basic_salary;
    } else {
        hra = 500;
        da = 0.98 * basic_salary;
    }

    int gross_salary = basic_salary + hra + da;
    printf("Gross Salary is: %d\n", gross_salary);

    return 0;
}