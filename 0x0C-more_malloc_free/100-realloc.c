#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - function that reallocates a memory block using malloc & free
 * @ptr: the previous pointer
 * @old_size: the old size
 * @new_size: the new size
 * Return: void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	ptr = malloc(old_size);

	if (!ptr)
		ptr = malloc(new_size);
	if (new_size > old_size)
		ptr = realloc(ptr, new_size);
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	free(ptr);
	return (ptr);
}
