#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: seconde string
 * @n: number of bytes to cpy from s2
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, m = 0, j = 0, k = 0;

	while (s1 && s1[m])
		m++;

	while (s2 && s2[k])
		k++;

	if (n < k)
		s = malloc(m + n + 1);
	else
		s = malloc(m + k + 1)

	if (s == NULL)
		return (NULL);

	while (i < m)
	{
		s[i] = s1[i];
		i++;
	}

	while (n < k && i < (m + n))
		s[i++] = s2[j++];

	while (n >= k && i < (m + k))
		 s[i++] = s2[j++];

	s[i] = '\0';
	return (s);
}
