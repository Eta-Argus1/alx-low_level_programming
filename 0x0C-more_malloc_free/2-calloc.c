#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - function that allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size of each element
 * Return: a pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = calloc(nmemb, size);

	if (p == NULL)
		return (NULL);

	return (p);
}
