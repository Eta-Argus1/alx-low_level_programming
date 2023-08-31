#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char check_string(const char *b);
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointer to a string of 0 & 1 chars
 * Return: the converted number, else 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i = 0;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		num = 2 * num + (b[i] - '0');
	}
	return (num);
}
