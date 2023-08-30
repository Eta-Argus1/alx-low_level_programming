#include "lists.h"
#include <stdio.h>

size_t _listint_length(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * _listint_length - return number of nodes in a looped listint_t linked list
 * @head: A pointer to the list to check
 * Return: 0 If the list is not looped else the number of nodes
 */
size_t _listint_length(const listint_t *head)
{
	const listint_t *list1, *list2;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	list1 = head->next;
	list2 = (head->next)->next;

	while (list2)
	{
		if (list1 == list2)
		{
			list1 = head;
			while (list1 != list2)
			{
				nodes++;
				list1 = list1->next;
				list2 = list2->next;
			}

			list1 = list1->next;
			while (list1 != list2)
			{
				nodes++;
				list1 = list1->next;
			}

			return (nodes);
		}

		list1 = list1->next;
		list2 = (list2->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the list.
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, i = 0;

	nodes = _listint_length(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (i = 0; i < nodes; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
