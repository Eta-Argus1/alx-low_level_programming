#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * *rot13 - encodes a string using rot13
 * @str: the string
 * Return: encoded string
 */
char *rot13(char *str)
{
	char str1[] =
		"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char str2[] =
		"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j, length, length1;

	length = strlen(str);
	length1 = strlen(str1);

	for (i = 0; i < length; i++)
	{
		for (j = 0; j < length1; j++)
		{
			if (str[i] == str1[j])
			{
				str[i] = str2[j];
				break;
			}
		}
	}
	return (str);
}
