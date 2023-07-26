#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * *string_toupper - changes all lowercase letters of a string to uppercase
 * @n: string
 * Return: the string in uppercase
 */
char *string_toupper(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		n[i] = toupper(n[i]);
		i++;
	}
	return (n);
}
