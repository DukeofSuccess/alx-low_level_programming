#include "lists.h"

/**
 *list_len - Returns number of elements in list
 *@h: pointer to list
 *Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t cyz = 0;
	while(h)
	{
		h = h->next;
		cyz++;
	}
	return(cyz);
}
