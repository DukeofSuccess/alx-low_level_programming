#include "lists.h"

/**
 *free_list - Free list_t list
 *@head: pointer to list
 *Return: void
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
