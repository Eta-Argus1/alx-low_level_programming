#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n) of a list
 * @head: first node in the linked list
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *list1 = head;

	while (list1)
	{
		sum += list1->n;
		list1 = list1->next;
	}

	return (sum);
}

