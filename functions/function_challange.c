#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int gcd(int a, int b);
float absolute(float x);
float sqrt_func(float y);


int main(){
    int func1_var = -36;
    int func2_var = 36;
    int func3_var = 15;

    printf("GCD Function = %d", gcd(func2_var, func3_var));
    printf("\nAbsolute = %.2f", absolute(func1_var));
    printf("\nSqrt = %.2f", sqrt_func(func2_var));
    printf("\nSqrt negative number = %.2f", sqrt_func(func1_var));

    return 0;
}

int gcd(int a, int b){

    int count;
    int gcd = 0;

    if (a < b)
        count = a;
    else
        count = b;

    for (int i = 2; i <= count; i++)
    {
        if(a % i == 0 && b % i == 0)
            gcd = i;
    }
    return gcd;    
}

float absolute(float x) {
    return abs(x);
}

float sqrt_func(float y){
    if (y > 0.0)
        return sqrt(y);
    else
        return -1.0;
}