#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of a string, followed by a new line
 * @str: The string
 * Return: void
 */
void puts_half(char *str)
{
	int length = strlen(str);
	int middle, i;

	if ((length % 2) == 0)
	{
		middle = length / 2;
		for (i = middle; i < length; i++)
			_putchar(str[i]);
	}
	else
	{
		middle = (length + 1) / 2;
		for (i = middle; i < length; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
