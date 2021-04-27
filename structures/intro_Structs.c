/*
The struct keyword enables you to define a collection of variables of various types called a structure that you can treat as a single unit

struct date
{
    int month;
    int day;
    int year;
}
The variable names within the date structure, month, day, and year, are called members or fields.
The definition of date defines a new type in the language. Variables can now be decleared to be of type struct date.
struct date today;
today.day = 25;
today.year = 2015;

There is also another way to define struct' variable :

struct date
{
    int month;
    int day;
    int year;
}today;

If you do not give a struct name when you define it, it is not possible to use it again. For ex:
struct
{
    int month;
    int day;
    int year;
}today;

Initiliazing structtures is similiar to initiliazing arrays
struct data today = {7, 2, 2015}; 
Assignment way:
today = (struct date){9, 25, 2015};
The list of values floows the cast and are to be assigned to the members of the structure, in order
*/
