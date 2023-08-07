#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: args
 * @av: args
 * Return: a poitner to a string or NULL
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int i, j, m, n;

	n = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			n++;
	}
	n += ac;
	m = 0;

	s = malloc(sizeof(char) * n + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j]; j++)
	{
		s[m] = av[i][j];
		m++;
	}
	if (s[m] == '\0')
		s[m++] = '\n';
	}

	return (s);
}
