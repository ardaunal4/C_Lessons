#include<stdio.h>
#include<stdlib.h>

/*
POINTERS AND CONST
you can use the constant keyword when you declare a pointer to indicate that the value pointed to must not be changed

long value = 9999L;
const long *pvalue = &value // defines a pointer to constant

In this example we can modify the value, but we cannot change value of the pointer.

value = 7777L;
Value pointed to has change, but you did not use the pointer to make the change.

Pointer itself is not constant, so you can still change what it points to:
long number = 8888L;
pvalue = &number;

You might also want to ensure that the address stored in a pointer cannot be changed
You can do this by using the const keyword in the declaration of the pointer.
int count = 43;
int *const pcount = &count;
You can change the count value as
*pcount = 355; 
and this is fine. But you can not change the address of the count with using pointer such as
int a = 6584;
pcount = &a; will give an error.
*/

int main(void){
    /*
    Any kind of pointer can passed around as a value of type void*
    The address of a variable of type int can be stored in a pointer variable of type void*
    When you want to access the integer value at the address stored in the void* pointer, you must first cast the pointer to type *int
    Example:
    */
    int i = 10;
    float f = 2.34;
    char ch = 'k';

    void *vptr = NULL;

    vptr = &i;
    printf("Value of i = %d\n", *(int *)vptr);

    vptr = &f;
    printf("Value of f = %f\n", *(float *)vptr);

    vptr = &ch;
    printf("Value of ch = %c\n", *(char *)vptr);
   
    return 0;
}