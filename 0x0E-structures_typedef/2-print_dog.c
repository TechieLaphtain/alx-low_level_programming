#include <stdio.h>
#include <stdlib.h>
#include "dog.h"  // Assuming "dog.h" contains the struct definition for 'dog'

/**
 * print_dog - prints a struct dog
 * @d: struct dog to print
 */
void print_dog(struct dog *d)
{
    if (d == NULL)
    {
        return;  // Return early if the pointer is NULL
    }

    if (d->name == NULL)
    {
        d->name = "(nil)";  // If name is NULL, set it to "(nil)"
    }
    
    if (d->owner == NULL)
    {
        d->owner = "(nil)";  // If owner is NULL, set it to "(nil)"
    }

    printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
