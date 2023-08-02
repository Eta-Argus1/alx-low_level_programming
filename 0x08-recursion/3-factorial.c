#include "main.h"
#include <math.h>
/**
 * factorial - return the factorial of a given number
 * @n: the integer
 * Return: -1 if n < 0 and the factorial if n > 0
 */
int factorial(int n)
{
	int fact = 1;

	if (n < 0)
		fact = -1;
	while (n > 1)
	{
		fact *= n;
		n--;
	}

	return (fact);
}
