#include "main.h"
#include <string.h>
/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: the string
 * @accept: second string
 * Return: pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	char *ret;

	ret = strpbrk(s, accept);

	return (ret);
}
