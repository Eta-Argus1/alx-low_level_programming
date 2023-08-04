#include "main.h"
#include <string.h>
/**
 * *_strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 * Return: a character
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
