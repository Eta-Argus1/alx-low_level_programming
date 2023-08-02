#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: character
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	int len = strlen(s);
	int i;

	for (i = len; i >= 0; i--)
		_putchar(s[i]);
}

