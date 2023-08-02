#include "main.h"
#include <string.h>
/**
 * *_strstr - locates a substring
 * @haystack: the string
 * @needle: substring
 * Return: a pointer to the beginning of the locates substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *ret;

	ret = strstr(haystack, needle);

	return (ret);
}
