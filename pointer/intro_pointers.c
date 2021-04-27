#include<stdio.h>
#include<stdlib.h>

/*
You should initilaize pointer when you decleare it. 
If you have nothing to initilaize it with, so you can use NULL. For ex:
int *pnumber = NULL; 
NULL is a constant that is defined in the standard library.
NULL is a value that is guaranteed not to point to any location in memory.
if you define more than one variable in a line, you should not confuse the pointers and normal variables such as
double num1, *pNum, num3; -> There is only one pointer which is *pNum
* is called indirection operator.
You can use the indirection operator to access to value of the variable pointed by a pointer. 
So indirection operator(*) is also called as dereference operator.
*/

int main(void){

    int number = 15;
    int *pointer = &number;
    printf("pointer is address of number : %p\n", pointer);
    printf("Address of the number : %p\n", &number);
    printf("pointer value is %d\n", *pointer);
    printf("Address of pointer : %p\n", (void*)&pointer); // the cast to void* is to prevent a possible warning from the complier
    // the %p specification expects the value to be some kind of pointer type, but the type of &pointer is pointer to pointer to int.
    printf("Size of the pointer is %d bytes\n", (int)sizeof(pointer));

    int result = 0;
    result = *pointer + 2;
    printf("new result is %d\n", result);

    return 0;
}