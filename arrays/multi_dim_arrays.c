#include<stdlib.h>
#include<stdio.h>

int main(void){

    // int numbers[3][4] = {
    //     {0, 1, 2, 3},
    //     {5, 6, 7, 8},
    //     {9}
    // };

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         printf("number[%d][%2d] = %3d\n", i, j, numbers[i][j]);
    //     }
    // }

    int three_dim[2][3][4] = {
        {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12}
        },
        {
            {13, 14, 15, 16},
            {17, 18, 19, 20},
            {21, 22, 23, 24}
        }
    };
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                printf("number[%d][%2d][%3d] = %4d\n", i, j, k, three_dim[i][j][k]);
            }
        }
    }

    return 0;
}