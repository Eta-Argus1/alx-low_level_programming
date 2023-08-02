#include "main.h"
#include <math.h>
#include <stdio.h>
int test_sqrt(int n, int i);
/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n: the integer
 * Return: the sqaure root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (test_sqrt(n, 0));
}

/**
 * test_sqrt - test to find natural sqrt
 * @n: the number
 * @i: number to iterate
 * Return: the resulting sqrt
 */
int test_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (test_sqrt(n, i + 1));
}
