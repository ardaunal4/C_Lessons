#include<stdlib.h>
#include<stdio.h>

int main(void){

    int number = 156;
    int *pNum = &number;

    printf("Address of the number is %p\n", &number);
    printf("Address of the pointer is %p\n", (void*)&pNum);
    printf("Value of the pointer is %p\n", pNum);
    printf("Value of the pointer is pointing to %d", *pNum);

    return 0;
}