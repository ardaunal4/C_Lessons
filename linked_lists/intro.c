/*
Linked lists are preferable over arrays when:
you need constant-time insertions/deletions from the list (such as in real-time computing where time predictability is absolutely critical)
you don't know how many items will be in the list. With arrays, you may need to re-declare and copy memory if the array grows too big
you don't need random access to any elements
you want to be able to insert items in the middle of the list (such as a priority queue)

Arrays are preferable when:
you need indexed/random access to elements
you know the number of elements in the array ahead of time so that you can allocate the correct amount of memory for the array
you need speed when iterating through all the elements in sequence. You can use pointer math on the array to access each element, whereas you need to lookup the node based on the pointer for each element in linked list, which may result in page faults which may result in performance hits.
memory is a concern. Filled arrays take up less memory than linked lists. Each element in the array is just the data. Each linked list node requires the data as well as one (or more) pointers to the other elements in the linked list.
Array Lists (like those in .Net) give you the benefits of arrays, but dynamically allocate resources for you so that you don't need to worry too much about list size and you can delete items at any index without any effort or re-shuffling elements around. Performance-wise, arraylists are slower than raw arrays.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 16

char *input(void)
{
    static char buffer[SIZE];
    char *r;
    int x;

    buffer[0] = '\0'; // initialize the buffer

    // gather input
    r = fgets(buffer, SIZE, stdin);
    if (r == NULL)
    {
        fprintf(stderr, "Input error!\n");
        exit(1);
    }

    // remove the newline
    for (x = 0; x < SIZE; x++)
    {
        if (buffer[x] == '\n')
        {
            buffer[x] = '\0';
            break;            
        }
    }

    return (buffer);    
}

int main()
{
    struct item {
        int id;
        char name[SIZE];
        float price;
        struct item *next;
    };
    struct item *first, *current;
    char temp[SIZE];

    // Allocate initial structure
    first = (struct item *)malloc(sizeof(struct item) * 1);
    if (first == NULL)
    {
        fprintf(stderr, "Unable to allocate memory!\n");
        exit(1);
    }

    // the first structure is now current structure
    current = first;

    // fill structure
    current->id = 1;
    printf("Record %d Fruit: ", current->id);
    strcpy(current->name, input());
    printf("Price: ");
    strcpy(temp, input());
    current->price = strtof(temp, NULL);
    //don't forget the initialize the pointer!
    current->next = NULL;

    printf("%d: %s for %.2f/pound\n",
            current->id,
            current->name,
            current->price
            );
            
    return(0);
}