//Print formatted details (Name, Age, Salary)
#include <stdio.h>
int main() {
    char name[50];
    int age;
    float salary;
    printf("Enter your name, age, and salary: ");
    scanf("%s %d %f", name, &age, &salary);
    printf("\n--- Employee Details ---\n");
    printf("Name   : %s\n", name);
    printf("Age    : %d\n", age);
    printf("Salary : %.2f\n", salary);
    return 0;
}
