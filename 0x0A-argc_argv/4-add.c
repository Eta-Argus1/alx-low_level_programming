#include "main.h"
#include <stdio.h>
#include <stdlib.h>
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
		if (*argv[i] < '0' || *argv[i] > '9')
		{
			printf("Error\n");
			return (1);
		}
		x = atoi(argv[i]);
		result += x;
		i++;
	}
	printf("%d\n", result);

	return (0);
}
