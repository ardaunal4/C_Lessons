#include<stdio.h>
#include<stdlib.h>

void first_func(void){
    printf("First Function");
}

int summation(int a, int b);

int main(){

    first_func();
    
    printf("Summation is = %d", summation(5, 7));

    return 0;
}

int summation(int a, int b){
    return a+b;
}