#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * reverse_array - reverse the content of an array of integers
 * @a: array of integers
 * @n: the number of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, middle, temp;

	middle = n / 2;

	for (i = 0; i < middle; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
