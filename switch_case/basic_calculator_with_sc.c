#include<stdlib.h>
#include<stdio.h>

int main(){

    float value1, value2, result;
    char operator;

    printf("Enter value1, value2 and operator in given order = ");
    scanf("%f %f %c", &value1, &value2, &operator);
    printf("\n");

    switch (operator)
    {
    case '+':
        result = value1 + value2;
        printf("Summation = %.2f", result);
        break;
    
    case '-':
        result = value1 - value2;
        printf("Subtraction = %.2f", result);
        break;
    
    case '*':
        result = value1 * value2;
        printf("Multiplication = %.2f", result);
        break;
    
    case '/':
        result = value1 / value2;
        printf("Division = %.2f", result);
        break;
    
    default:
        printf("It is not a valid operator!!");
        break;
    }
    return 0;
}