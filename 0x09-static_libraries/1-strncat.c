#include "main.h"
#include <string.h>
/**
 * *_strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: the number of n bytes
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
