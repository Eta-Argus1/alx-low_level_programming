#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: concatenated string, or null in failure
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j, m;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = j = m = 0;

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	s = malloc(sizeof(char) * (i + j + 1));
	if (s == NULL)
		return (NULL);
	i = 0;

	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}
	while (s2[m] != '\0')
	{
		s[i] = s2[m];
		i++, m++;
	}
	s[i] = '\0';
	return (s);
}
