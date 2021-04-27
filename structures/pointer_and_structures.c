/*
Pointers to structures are easier to manupulate than structures themselves
Many data representations use structures containing pointers to other structures
You can define a variable to be a pointer to a struct
struct data *datePtr
The variable datePtr can be assigned just like other pointers

datePtr = &todaysDate;
You can then indirectly access any of the members of the date structure pointed to by datePtr

(*datePtr).day = 21; NOTE: Parantheses are necessary!

Pointers to structures are so often used in C that a special operator exits
The structure pointer operator is ->.
(*x).y == x->y, so
datePtr->day = 21; 
*/
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

struct date
    {
        int month;
        int day;
        int year;
    };


int main(){

    struct date today, *datePtr;
    datePtr = &today;

    datePtr->month = 9;
    datePtr->day = 25;
    datePtr->year = 2015;

    printf("Today's date is %i/%i/%.2i\n", datePtr->day, datePtr->month, datePtr->year%100);


    /*
    Pointer can also be member of the struct
    */

    struct intPtr
    {
        int *p1;
        int *p2;
    };

    struct intPtr pointers;

    int i1 = 100, i2;

    pointers.p1 = &i1;
    pointers.p2 = &i2;
    *pointers.p2 = 97;

    printf("i1 = %i, *pointers.p1 = %i\n", i1, *pointers.p1);
    printf("i2 = %i, *pointers.p2 = %i\n", i2, *pointers.p2);    


    //There is a certain logic when you need to use strings in the structer, you can use pointer to point these strings if you are dynamically allocating memory.
    
    struct namect
    {
        char *fname; 
        char *lname;
        int letters;
    };
    /*
    understand that the two strings are not stored in the structure
    they stored in the chunk of memory managed by malloc()
    The addresses of two strings are stored in the structure.
    Address are what string-handling functions typically work with
    An example function below
    */
    

    return 0;
}

void getinfo(struct namect *pst)
{
    char temp[SLEN];
    printf("Please enter your first name : \n");
    s_gets(temp, SLEN);

    // Allocate memory to hold  name
    pst->fname = (char*) malloc(strlen(temp) + 1);

    // copy name to allocated memory
    strcpy(pst->fname, temp);

    printf("Please enter your last name : \n");
    s_gets(temp, SLEN);
    pst->lname = (char*) malloc(strlen(temp) + 1);
    strcpy(pst->lname, temp);

}

