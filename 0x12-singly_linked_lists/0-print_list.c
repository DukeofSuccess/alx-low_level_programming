#include "lists.h"

/**
 *print_list - Prints all elements of a list
 *@h: pointer to list_t
 *Return: number of nodes in list
 */

size_t print_list(const list_t *h)
{
	size_t cyz = 0;

	while (h != NULL)
	{
		if (!h->str)
		{
			printf("[0] (nil)");
			return (cyz);
		}

		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		cyz++;
	}
	return (cyz);
}
