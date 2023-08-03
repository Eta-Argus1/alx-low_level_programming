#include "main.h"
#include <string.h>
int _strlen(char *s);
int check_char(char *s, int i, int length);
/**
 * is_palindrome -  a function that returns 1 if a string is a palindrome
 *  and 0 if not.
 *  @s: the string
 *  Return: 1 or 0;
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_char(s, 0, _strlen(s)));
}
/**
 * _strlen - returns the length of the string
 * @s: the string
 * Return: the length
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}
/**
 * check_char - check the character
 * @s: the string
 * @i: iterator
 * @length: string length
 * Return: 1 or 0
 */
int check_char(char *s, int i, int length)
{
	if (*(s + i) != *(s + length - 1))
		return (0);
	if (i >= length)
		return (1);
	return (check_char(s, i + 1, length - 1));
}
