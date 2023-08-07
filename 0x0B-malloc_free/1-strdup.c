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
	char *dupstr;
	int i, j;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	dupstr = malloc(sizeof(char) * (i + 1));

	if (dupstr == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		dupstr[j] = str[j];
	return (dupstr);
}
