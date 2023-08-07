#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *create_array - function that creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array
 * @c: the character
 * Return: Null if size = 0, a poitner to the array if not
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(sizeof(char) * size);

	if (size == 0 || arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
