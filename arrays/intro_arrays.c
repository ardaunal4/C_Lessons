#include<stdio.h>
#include<stdlib.h>
/*
In arrays, there is no bound errors, so be carefully the bounds of arrays when you want to access the elements of it.
*/

int main(void){

    int grades[10];
    int count = 10;
    long sum = 0;
    float average = 0.0;

    printf("Enter the 10 grades: \n");

    for(int i = 0; i < count; i++){
        printf("\nEnter %d. number = ", i+1);
        scanf("%d", &grades[i]);
        sum += grades[i];
    }

    printf("Sum of elements of array is %ld\n", sum);
    average = (float)sum/count;
    printf("Average of elements of array is %.2f\n", average);
    
    return 0;
}