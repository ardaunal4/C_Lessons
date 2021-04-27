#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

int main(int argc, char *argv[]){

    int a = 1;
    int b = 0;
    bool result1;
    bool result2;
    bool result3;
    bool result4;
    bool result5;
    bool result6;
    bool result7;
    bool result8;
    bool result9;
    bool result10 = 0;
    bool result11 = 0;
    bool result12 = 0;
    bool result13 = 1;
    bool result14 = 14;

    result1 = a && b;
    result2 = a || b;
    result3 = a != b;
    result4 = a == b;
    result5 = a <= b;
    result6 = a >= b;
    result7 = a < b;
    result8 = a > b;
    result9 = !a;
    result10 += a;
    result11 -= b;
    result12 *= a; 
    result13 /= a;
    result14 %= a;

    printf("result1 = %d\n", result1);
    printf("result2 = %d\n", result2);
    printf("result3 = %d\n", result3);
    printf("result4 = %d\n", result4);

    return 0;
}