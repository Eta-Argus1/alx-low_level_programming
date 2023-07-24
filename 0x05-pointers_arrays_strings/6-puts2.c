#include "main.h"
#include <string.h>
/**
 * puts2 -  prints a string, followed by a new line
 * @str: The string
 * Return: void
 */
void puts2(char *str)
{
	int length = strlen(str);
	int i;

	for (i = 0; i < (length - 1); i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
