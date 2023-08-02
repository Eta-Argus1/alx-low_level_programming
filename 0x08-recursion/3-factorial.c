#include "main.h"
#include <math.h>
/**
 * factorial - return the factorial of a given number
 * @n: the integer
 * Return: -1 if n < 0 and the factorial if n > 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if(n == 0)
		return (1);
	return(n * factorial(n - 1));
}
