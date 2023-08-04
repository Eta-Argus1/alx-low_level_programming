#include "main.h"
#include <string.h>
/**
 * _strspn - get the length of a prefix substring
 * @s: the string
 * @accept: second string
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int len;

	len = strspn(s, accept);

	return (len);
}
