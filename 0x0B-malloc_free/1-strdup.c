#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * *_strdup - function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter
 * @str: given string
 * Return: Null if str is NULL if not a pointer to the dup string
 */
char *_strdup(char *str)
{
	int i;
	char *dupstr;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	dupstr = malloc(sizeof(char) * (i + 1));

	dupstr = strdup(str);
	return (dupstr);
}
