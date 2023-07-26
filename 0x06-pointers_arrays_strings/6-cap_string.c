#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * *cap_string - capitalizes all words of a string
 * @n: string
 * Return: capitalized string
 */
char *cap_string(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (i == 0)
		{
			n[i] = toupper(n[i]);
			continue;
		}
		if (n[i] == ' ')
		{
			i++;
			n[i] = toupper(n[i]);
			continue;
		}
		else
			n[i] = tolower(n[i]);
	}
	return (n);
}
