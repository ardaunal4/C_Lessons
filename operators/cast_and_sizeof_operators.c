#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){

    int a = 12;
    float b = 15.5;
    double c = 156.12e+2;
    char d = 'a';

    printf("size of integer = %d\n", sizeof(a));
    printf("size of float = %d\n", sizeof(b));
    printf("size of double = %d\n", sizeof(c));
    printf("size of char = %d\n", sizeof(d));

    int result = 0;

    result = (int)12.12 + (int)13.88; // 12.12 becomes 12 and 13.88 becomes 13
    printf("result = %d", result);

    
    return 0;
}