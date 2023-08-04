#include "main.h"
#include <stdio.h>
/**
 * main - program that prints its name, followed by a new line.
 * @argc: array length
 * @argv: the array
 * Return: 0 if it runs succesfully and 1 if not
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
