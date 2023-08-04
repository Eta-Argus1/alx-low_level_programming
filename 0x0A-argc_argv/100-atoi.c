#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * _atoi - convert string into an integer
 * @s: the string
 * Return: the integer value
 */
int _atoi(char *s)
{
	int length, sign, num, i, a, digit;

	i = 0;
	sign = 0;
	num = 0;
	length = strlen(s);
	a = 0;
	digit = 0;

	while (i < length && a == 0)
	{
		if (s[i] == '-')
			++sign;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (sign % 2)
				digit = -digit;
			num = num * 10 + digit;
			a = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			a = 0;
		}
		i++;
	}

	if (a == 0)
		return (0);

	return (num);

}
