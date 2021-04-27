/*
Whenever you define a variable in C, the complier automatically allocates the correct amount of storage for you based on the data type.
It is frequently desirable to be able to dynamically allocate storage while a program is running.
If you have a program that is designed to read in a set of data from a file into an array in memory, you have three choices:
1. define the array to contain the maximum number of possible elements at compile time
2. use a variable-lenght array to dimension the size of the array at run time
3. allocate the array dynamically using one of C's memory allocation routines

Dynamic memory allocation allows memory for storing data to be allocated dynamically when your program executes.
Dynamic memory allocation reserves space in a memory area called the heap.

The memory in the heap is different in that it is controlled by you.
When  you allocate memory on the heap, it is up to you to keep track of when the memory you have allocated is no longer required.
You must free the space you have allocated to allow it to be reused.
*/

/*
There are 3 functions which are able to create dynamic memory allocations.
1. malloc() :
The simplest standard library funtion that allocates memory at runtime is called malloc().
It needs to include the stdlib.h header file.
You specify the number of bytes of memory that you want to allocated as the argument.
It returns the address of the first byte of memory that it allocated.
Because you get an address returned, a pointer is the only place to put it.  
Exmple:

int *pNumber = (int*)malloc(100);

In the above, you have requested 100 bytes of memory and assigned the address of this memory block to pNumber.
pNumber will point to the first int location at the beginning of the 100 bytes that were allocated.
It can hold 25 int values on my computer, because they require 4 bytes each.
Assumes that type int requires 4 bytes.

It would be better to remove the assumption that ints are 4 bytes :

int *pNumber = (int*)malloc(25*sizeof(int));

The argument to malloc() above is clearly indicating that sufficient bytes for acommodating 25 values of tpye int should be made available.
Also notice the cast (int*), which converts the address returned by the function to the type pointer to int.
malloc() returns a pointer of type pointer to void, so you have to cast.

It is possible to see a failure in this senerio.
If the memory that you requested can not be allocated for any reason : 
malloc() returns a pointer with the value NULL.
It is always a good idea to check any dunamic memory request immediately using an if statement to make sure the memory is actually there before you try to use it.

int *pNumber = (int*)malloc(25*sizeof(int));
if(!pNumber)
{
    //code to deal with memory allocation failure.
}

RELEASING MEMORY
When you allocate memory dynmically, you should always release the memory when it is no longer required.
Memory that you allocate on the heap will be automatically released when your program ends.

A memory leak occures when you allocate some memory dynamically and you do not retain the reference to it, so you are unable to release the memory:
Often occurs within a loop.
Because you do not release the memory when it is no longer required, your program consumes more and more of the available memory on the each loop iteration and 
eventually may occupy it all.
To free memory that you have allocated dynamically, you must still have access to the address that references the block of memory.

To release the memory for a block of dynamically allocated memory whose address you have stored in a pointer:

free(pNumber);
pNumber = NULL;

The free() function has a formal parameter of type void*.
You can pass a pointer of any type as the argument.

As long as pNumber contains the address that was returned when the memory was allocated, the entire block of memory will be freed for further use.
You should always set the pointer to NULL after the memory that it points to has been freed.
*/

/*
2. The calloc() function offers a couple of advantages over malloc():
It allocates memory as a number of elements of a given size
It initializes the memory that is allocated so that all bytes are zero
calloc() function requires two argument values
1. number of data items for which space is required
2. size of each data item

int *pNumber = (int *)calloc(75, sizeof(int));
The return value will be NULL if it was not possible to allocate the memory requested.
*/

/*
The realloc() function enables you to reuse or extend memory that you previously allocated using malloc() or calloc().

It expects two argument values:
1. a pointer containing an address that was previously returned by a call to malloc(), calloc()
2. the size in bytes of the new memory that you want allocated.

It returns a void* pointer to the new memory or NULL if the operation fails for some reason.

The most important feautre of this operation is that realloc() preserves the contents of the original memory area.
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    char *str = NULL;
    
    //Initial memory allocation

    str = (char *) malloc(15 * sizeof(char));
    strcpy(str, "ardi");
    printf("String = %s, Address = %u\n", str, str);

    //Reallocating memory
    str = (char *) realloc(str, 25 * sizeof(char));
    strcat(str, "tubi");
    printf("String = %s, Address = %u\n", str, str);

    free(str);
    
    return 0;
}