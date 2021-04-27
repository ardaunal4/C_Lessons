#include<stdio.h>

int main(int argc, char *argv[]){

    double height = 12.5;
    double width = 4.00;
    double perimeter = 0.0;
    double area = 0.0;

    // printf("Enter height and width value = ");
    // scanf("%g %e", height, width);
    // printf("\n");

    perimeter = 2.0 * (height + width);
    area = height*width;

    printf("area = %e\n", area);
    printf("perimeter = %g", perimeter);
    return 0;
}