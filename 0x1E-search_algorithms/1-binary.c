#include "search_algos.h"

/**
 * binary_search - function that searches for a value ina sorted array
 * of integers using the binary search algorithm.
 * @array: pointer to the first element of te array to search in.
 * @size: the number of the elements.
 * @value: the value to search for.
 * Return: if the value is not present or the array is NULL, -1.
 * 		the value is not present or the array is NULL, -1.
 */

int binary_search(int *array, size_t size, int value)
	{
		size_t i, left, right;

		if (array == NULL)
			return (-1);
	}
