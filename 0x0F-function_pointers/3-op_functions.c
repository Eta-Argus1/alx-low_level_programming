#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - function that adds two numbers
 * @a: first number
 * @b: second number
 * Return: the sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that subs two numbers
 * @a: first number
 * @b: second number
 * Return: the sub
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that product two numbers
 * @a: first number
 * @b: second number
 * Return: the product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that devide two numbers
 * @a: first number
 * @b: second number
 * Return: the devision
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function that calculate the module two numbers
 * @a: first number
 * @b: second number
 * Return: the reminder
 */

int op_mod(int a, int b)
{
	return (a % b);
}
