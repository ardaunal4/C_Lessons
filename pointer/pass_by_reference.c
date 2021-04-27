#include<stdlib.h>
#include<stdio.h>

/* this is a basic swap function */

void swap(int x, int y){

    int temp;

    temp = x; // save the value of x
    x = y; // put y into x
    y = temp; // put temp into y
}

void swap2(int *x, int *y){

    int temp;

    temp = *x; // save the value of x
    *x = *y; // put y into x
    *y = temp; // put temp into y
}

int main(){

    int a = 100;
    int b = 200;

    printf("Before a = %d\n", a);
    printf("Before b = %d\n", b);

    swap2(&a, &b);

    printf("After a = %d\n", a);
    printf("After b = %d\n", b);

    return 0;
}

/*
You apply the const keyword to a parameter that is a pointer to specify that a function will not change the value to which argument points
bool SendMessage(const char* pmessage)
{
    // Code run to send the message
    return true;
}
*/
/*
Returning a pointer from a functions is particularly powerful capability
int *myFunction*(){

    // ....
}

*/