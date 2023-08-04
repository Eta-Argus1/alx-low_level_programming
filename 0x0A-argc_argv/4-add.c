#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int check(char *s);
/**
 * main - program that adds positive numbers.
 * @argc: array length
 * @argv: the array
 * Return: 0 if it runs succesfully and 1 if not
 */
int main(int argc, char *argv[])
{
	int i, x, result;

	result = 0;
	i = 1;

	while (i < argc)
	{
		if (check(argv[i]))
		{
			x = atoi(argv[i]);
			result += x;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", result);

	return (0);
}
/**
 * check - check for digits
 * @s: the string
 * Return: always 0
 */
int check(char *s)
{
	unsigned int i;

	i = 0;
	while (i < strlen(s))
	{
		if (!isdigit(s[i]))
			return (0);
		i++;
	}
	return (1);
}
