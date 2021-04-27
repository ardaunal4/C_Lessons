#include<stdio.h>
#include<stdbool.h>

int main(int argc, char *argv[]){

    unsigned int a = 60; // 0011 1100
    unsigned int b = 13; // 0000 1101
    int result1 = 0;
    int result2 = 0;
    int result3 = 0;
    int result4 = 0;
    int result5 = 0;
    
    result1 = a & b; // 0000 1100
    result2 = a | b; // 0011 1101
    result3 = ~a; // -61???????
    result4 = a << 2; // 1111 0000
    result5 = b >> 2; // 0000 0011

    printf("result1 = %d\n", result1);
    printf("result2 = %d\n", result2);
    printf("result3 = %d\n", result3);
    printf("result4 = %d\n", result4);
    printf("result5 = %d\n", result5);

    return 0;
}