#include "main.h"
#include <string.h>
/**
 * *_strchr - locates a character in a string
 * @s: the string
 * @c: first occurrence of the character
 * Return: a pointer
 */
char *_strchr(char *s, char c)
{
	char *ret;

	ret = strchr(s, c);

	return (ret);
}
