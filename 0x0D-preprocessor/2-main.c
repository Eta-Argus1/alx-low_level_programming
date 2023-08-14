#include <stdio.h>

/**
 * main - prints the name of the file it was compiled from + \n
 * Return: 0 if successfully runned, 1 if else
 */

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
