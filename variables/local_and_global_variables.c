#include<stdlib.h>
#include<stdio.h>

// If a variable is created inside of function, then it is called as local variable.
// If a variable is created outside of the main function, it is a global variable.
// in general global variables are bad things and they should not use if it is not necessary so much

int global_var = 5;

void myfunc();

int main(){
    // can access both global_var and main_local_var

    int main_local_var = 15;

    return 0;
}

void myfunc(void){
    // can access both global_var and local_var
    int local_var = 10;
}