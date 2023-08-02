#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * _pow_recursion - returns the value of x raised by the power of y
 * @x: first int
 * @y: second int
 * Return: x to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
