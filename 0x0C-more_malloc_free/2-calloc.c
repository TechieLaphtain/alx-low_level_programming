#include "main.h"

/**
 * _calloc - Allocate memory for an array of elements and initialize to 0
 *
 * @nmemb: Number of elements to allocate
 * @size: Size of each element in bytes
 *
 * Return: Pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    char *a;
    unsigned int b;

    if (nmemb == 0 || size == 0)
        return (NULL);

    a = malloc(nmemb * size);
    if (a == NULL)
        return (NULL);

    for (b = 0; b < (nmemb * size); b++)
        a[b] = 0;

    return (a);
}
