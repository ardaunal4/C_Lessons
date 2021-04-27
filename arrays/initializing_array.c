#include<stdio.h>
#include<stdlib.h>
/* It is always a good practise to initilize an array when you define it.
    C does not provide any shortcut mechanisms for initializing array elements
    We can initili
 */

#define MONTHS 12

int main(void){

    int arr1[5] = {0, 1, 2, 3, 4};
    int arr2[100] = {0, 1, 2, 3}; // and all the other elements is going to be zero.
    int arr3[5] = {[4] = 1, [3] = 2, [2] = 3, [1]= 4, [0] = 5};
    int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int index;

    // for(int i = 0; i < 5; i++)
    //     printf("Array3[%d] is = %2d\n", i, arr3[i]);

    for(int k = 0; k < 100; k++)
        printf("Array2[%d] is = %2d\n", k, arr2[k]);

    // for(index = 0; index < MONTHS; ++index)
    //     printf("Month %d has %2d days.\n", index + 1, days[index]);
    
    return 0;
}