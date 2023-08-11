
#include <stdio.h>
#include <string.h>

union Employee
{
    int age;
    char Name[50];
    char Department[20];
    long int Salary;
};
int main()
{
    union Employee emp1;
    union Employee emp2;
    printf("Details of the First Employee \n");
    emp1.age = 27;
    printf("\tEmployee Age = %d \n", emp1.age);
    strcpy(emp1.Name, "ABC");
    printf("\tEmployee Name = %s \n", emp1.Name);
    strcpy(emp1.Department, "Accounts");
    printf("\tEmployee Department = %s \n ", emp1.Department);
    emp1.Salary = 30000;
    printf("\tEmployee Salary = %.2ld \n ", emp1.Salary);
    printf("Details of the Second Employee \n");
    emp2.age = 32;
    printf("\tEmployee Age = %d \n", emp2.age);
    strcpy(emp2.Name, "XYZ");
    printf("\tEmployee Name = %s \n", emp2.Name);
    strcpy(emp2.Department, "Technology");
    printf("\tEmployee Department = %s \n ", emp2.Department);
    emp2.Salary = 35000;
    printf("\tEmployee Salary = %.2ld \n ", emp2.Salary);
    return 0;
}