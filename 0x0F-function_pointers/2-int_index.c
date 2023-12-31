#include "function_pointers.h"

/**
 * int_index - fucntion that search for an interger
 * @array: the array
 * @size: size of the array
 * @cmp: pointer to the function in use
 * Return: index of the element that matches if none return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
