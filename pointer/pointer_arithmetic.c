#include<stdio.h>
#include<stdlib.h>

int arraySum(int array[], const int n)
{
    int sum = 0, *ptr;
    int *const arrayEnd = array + n; // constant pointer that address can not be changed

    for(ptr = array; ptr < arrayEnd; ++ptr){
        sum += *ptr;
    }

    return sum;
}

// example of pointer notation of array

int arraySum2(int *array, const int n)
{
    int sum = 0;
    int *const arrayEnd = array + n;

    for(; array < arrayEnd; ++array)
        sum += *array;
    
    return sum;
}


int main(){

    int array[100] = {0};
    int *parr = &array[0]; // or int *parr = array

    for (int i = 0; i < 100; i++)
    {
        array[i] = i;
    }

    printf("Third variable of array = %d\n", *(parr + 2));

    // Example of the array function
    int values[10] = {3, 7, -9, 3, 6, -1, 7, 9, 1, -5};
    printf("The sum is %i\n", arraySum(values, 10));
    

    return 0;
}