#include <stdlib.h>
#include "main.h"

int count_word(char *s);

/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *temp;
	int i, m = 0, len = 0, words, j = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (j)
			{
				end = i;
				temp = (char *) malloc(sizeof(char) * (j + 1));
				if (temp == NULL)
					return (NULL);
				while (start < end)
					*temp++ = str[start++];
				*temp = '\0';
				matrix[m] = temp - j;
				m++;
				j = 0;
			}
		}
		else if (j++ == 0)
			start = i;
	}

	matrix[m] = NULL;

	return (matrix);
}
/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int count, j, i;

	count = 0;
	i = 0;

	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] == ' ')
			count = 0;
		else if (count == 0)
		{
			count = 1;
			i++;
		}
	}

	return (i);
}
