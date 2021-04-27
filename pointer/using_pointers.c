#include<stdio.h>
#include<stdlib.h>

/*
It is possible to use the arithmetic operators with pointers. For ex:
---use the + operator to add an integer to a pointer or a pointer to an integer(integer
is multiplied by the number of bytes in the pointed-to type and added to the original address)
---increment a pointer by one(useful in arrays whem moving to  the next element)
---use the - operator to subtract an integer from a pointer(integer is multiplied by the number
of bytes in the pointed-to type and subtracted from the original adress)
---decrementing a pointer by one(useful in arrays when going back to the previous element)
---it is also possible to find difference between two pointers( you do this for two pointers
to elements that are in the same array to find out how far apart the elements are)
---you can use the relational operators to compare the values of two pointers(pointers must
be the same type! You can use it find which pointer has greatest address in the array.)
---be careful when incrementing or decrementing pointers and causing an array "out of bounds" error.
*/

int main(void){

    int number = 0;
    int *pNumber = NULL;
    number = 10;
    pNumber = &number;
    *pNumber += 25; // * indicates you are accessing the contents to which the variable called pNumber is pointing to
    printf("Number is %d\n", number);

    // Another example
    long num1 = 0L;
    long num2 = 0L;
    long *pnum = NULL;

    pnum = &num1;
    *pnum = 2L;
    ++num2;
    num2 += *pnum; // add num1 to num2

    pnum = &num2; // get address of num2
    ++*pnum; // increment num2 indirectly

    printf("num1 = %ld, num2 = %ld, *pnum = %ld, *pnum + num2 = %ld\n", num1, num2, *pnum, *pnum + num2);

    /*
    when we have ued scanf() to input values, we have used  the & operator to obtain the address of a vriable.
    On the variable that is to store the input(second argument)
    When you have a pointer that already contains an address, you can use the pointer name as an argument for scanf().
    */

    int value = 0;
    int *pvalue = &value;

    printf("Input an integer : ");
    scanf("%d", pvalue);
    printf("You entered %d\n", value);

    /* There is one rule you should burn into your memory: That do not dereference an uninitilized pointer!
    int *pt;
    *pt = 5;
    */
    // CAUTION : Before you use a pointer, it should be assigned a memory location that has already been allocated!

    // it is also possible to define a pointer, which refers nothing, such as int *pointer = 0; with 0 instead of NULL. They are same.
    // But it is important to check if it points 0 before you dereference a pointer such as if(!pointer)

    return 0;
}