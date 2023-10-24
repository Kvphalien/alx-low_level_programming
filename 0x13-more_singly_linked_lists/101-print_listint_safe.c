#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *temp = head;
	const listint_t *check = head;

	while (temp)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		count++;

		temp = temp->next;

		if (temp >= check)
		{
			printf("-> [%p] %d\n", (void *)temp, temp->n);
			exit(98);
		}
	}

	return (count);
}

