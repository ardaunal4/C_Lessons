/*
Declaring an array of structures is like declaring any other kind of array
struct date myDates[10];
Defines an array called myDates, which consists of 10 elements. Each element inside the array is defined to be of type struct date.
Referencing a particular structure element inside the array is quite natural:

myDates[1].month = 8;
myDates[1].day = 8;
myDates[1].year = 1986;

Initialization of arrays containing structures is similar to initialization of multidimensional arrays:
struct date myDates[5] = {{12, 10, 1975}, {12, 30, 1980}, {11, 15, 2005}};
struct date myDates[5] = {12, 10, 1975, 12, 30, 1980, 11, 15, 2005}; // the inner pairs of braces are optional
struct date myDates[5] = {[3] = {12, 10, 1975}};
struct date myDates[5] = {[1].month = 12, [1].day = 30};

Structure contining arrays:

struct month
{
    int numberOfDays;
    char name[3];
};
Define and initiliaze a variable

struct mont aMonth;
aMonth.numberOfDays = 31;
aMonth.name[0] = 'J';
aMonth.name[1] = 'a';
aMonth.name[2] = 'n';
or
struct month aMonth = {31, {'J', 'a', 'n'}};
*/
