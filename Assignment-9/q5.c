// Declare  a  structure  of  a  student  with  details  like  roll  number,  student  name  and 
// total  marks.  Using  this  declare  an  array  with  50  students.  Write  a  C  program  to 
// read details of ‘n’ students and print the list of students who have scored 75 marks 
// and above.

#include <stdio.h>
#include <string.h>

struct student {
    int roll;
    char name[100];
    int marks;
};

int main() {
    struct student students[50];

    int n;
    printf("How many students? ");
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {

        struct student stu;
        int roll, marks;
        char name[100];

        printf("Roll No. ");
        scanf("%d", &roll);

        getc(stdin);

        printf("Enter Student Name: ");
        gets(name);


        printf("Total Marks ");
        scanf("%d", &marks);

        strcpy(stu.name, name);
        stu.roll = roll;
        stu.marks = marks;

        students[i] = stu;

        printf("\n");
    }

    for (int i = 0; i < n; i++) {
        if (students[i].marks >= 75) {
            printf("%s (%d) = %d\n", students[i].name, students[i].roll, students[i].marks);
        }
    }

    return 0;
}