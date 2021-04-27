#include<stdio.h>
#include<stdlib.h>

int main(void){

    int prime_numbers[96] = {[0] = 2};

    int check = 0;
    int sum = 0;
    int count = 1;

    for (int i = 3; i <= 100; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                check += 1;                  
            }                
        }
        if (check == 0)
        {
            prime_numbers[count] = i;
            count += 1;
        }
        check = 0;
    }
    for (int l = 0; l < count; l++)
    {
        printf("prime number %d is %2d\n", l + 1, prime_numbers[l]);
    }
    
    return 0;
}