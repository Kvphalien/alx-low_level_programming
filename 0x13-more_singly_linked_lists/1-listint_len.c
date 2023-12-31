#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked list.
 * @h: Pointer to the listint_t list.
 *
 * Return: The number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}

