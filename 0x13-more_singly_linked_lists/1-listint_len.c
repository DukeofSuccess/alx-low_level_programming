#include "lists.h"

/**
 *listint_len - Returns number of elements in list
 *@h: pointer to listint_t
 *Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
