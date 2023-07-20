#include "main.h"
/**
 * _isdigit - checks for a digit 0 to 9
 * @c: the character to check
 * Return: 1 if it's a digit & 0 if not
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
