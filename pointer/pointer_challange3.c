#include<stdio.h>

void squares(int * const ptr) // we do not want to change address of value!
{
    *ptr = (*ptr) * (*ptr);
}

int main(){

    int a = 15;
    squares(&a);
    printf("square of a = %d", a);
    return 0;
}
