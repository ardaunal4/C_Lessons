#include<stdlib.h>
#include<stdio.h>

/*
One of the most common uses of pointers in C is as pointers to arrays
Pointers to arrays generally result in code that uses less memory and executes faster
*/

int main(void){

    int values[100];
    int *valuesPtr = NULL;
    // when you define a pointer that is used to point to the elements of an array, you do not designate the pointer as type "pointer to array"
    // Array itself is a pointer and it refers address of first element!
    valuesPtr = values;
    // An equivalent way of producing a pointer to the start of values is to apply address operator to the first element of the array
    valuesPtr = &values[0];
    // NOTE : The two expressions ar[i] and *(ar + i) are equivalent in meaning!
    
    return 0;
}