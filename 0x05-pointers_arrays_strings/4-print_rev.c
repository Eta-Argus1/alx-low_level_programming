#include "main.h"
/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: The string
 * Return: void
 */
void print_rev(char *s)
{
	int length = 0;
	int n;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	for (n = length; n > 0; n--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
