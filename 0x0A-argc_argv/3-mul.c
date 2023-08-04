#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers.
 * @argc: array length
 * @argv: the array
 * Return: 0 if it runs succesfully and 1 if not
 */
int main(int argc, char *argv[])
{
	int i, result;

	result = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		int x = strtol(argv[i], NULL, 10);

		result *= x;
	}
	printf("%d\n", result);

	return (0);
}
