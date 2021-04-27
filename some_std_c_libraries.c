#include<stddef.h> // includes definitions
#include<limits.h> // contains various implementation-defined limits for character and integer data types
#include<stdbool.h>
#include<ctype.h> // for character functions such as : isdigit, isblank, islower, tolower and so on.
#include<stdio.h> // for common I/O functions such as EOF, NULL, stdin, stdout, FILE, and stderr(all constant values). fclose(), fopen() ...
/* some functions from stdio.h
feof(filePtr) -> returns nonzero if the identified files has reached the end of the file and returns zero otherwise
fflush(filePtr) -> flushes(writes) any data from internal buffers to the indicated file, returning zero on success and the value EOF if an error occurs
*/
#include<stdlib.h> 
/* 
Some stdlib.h functions
double atof(s) convertes string to a floating number
int atoi(s) convertes string to a int number
void *calloc(n, size);
void free(pointer);
void *malloc(ize)
void *realloc(pointer, size)
int abs(h)
void exit(n) -> terminates the program execution, closing any opened files and returning the exit status specified by its int argument n
int rand(void)
void srand(seed) -> seeds to random generator
int system(s) -> gives the command contained in the character array pointed to by s to the system for execution, returnin a system defined value.
For ex : system("pause"), system("mkdir C:\\new_file") ..
*/
#include<math.h> // , 
/* 
Some math.h functions
double acosh(x);
double atan(x);
double ceil(x) -> returns smaller integer value greater than or equal to x.
double cos(r);
double floor(x); -> returns larger integer value less than or equal to x.
double log(x);
double nan(s) -> returns NaN
double pow(x, y) -> x^y
double remainder(x, y) -> returns reminder of x divided by y.
double round(x) -> rounded number for ex : 0.5 -> 1
double sqrt(x);
*/
#include<assert.h> // library for debugging
/*
Example of library
it conists of a macro named assert()

z = x*x - y*y;
assert(z >= 0); // if assert false, program will exit
*/
#include<time.h> // defines macros and funtions supporting operations with dates and times
#include<errno.h> // defines macros for the reporting of errors
#include<locale.h> // defines functions and macros to assist with formatting data such as monetary(parasal) units for different countries
#include<signal.h> // define facilities for dealing with condition that arise during program execution, including error conditiions
#include<stdarg.h> // defines facilities that enable a variable number of arguments to be passed to a function