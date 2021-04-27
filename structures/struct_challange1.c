#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){

    struct employee
    {
        char name[50]; 
        int hireDate;
        float salary;
    };

    struct employee isci1;
    *isci1.name = "arda";
    isci1.salary = 3500;
    isci1.hireDate = 15;

    struct employee isci2;
    printf("Enter name of employee = ");
    scanf("%s", *isci2.name);
    printf("\nEnter salary of employee = ");
    scanf("%d", isci2.salary);
    printf("\nEnter hire date of employee = ");
    scanf("%d", isci2.hireDate);

    printf("Name of the employee1 = %s\n");



    return 0;
}