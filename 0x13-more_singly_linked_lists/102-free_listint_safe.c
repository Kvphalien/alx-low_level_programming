#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t list.
 * @h: Double pointer to the listint_t list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *temp;

	if (h == NULL)
		return (0);

	while (*h)
	{
		size++;
		if (*h <= (*h)->next)
		{
			free(*h);
			break;
		}
		temp = (*h)->next;
		free(*h);
		*h = temp;
	}
	*h = NULL;

	return (size);
}

