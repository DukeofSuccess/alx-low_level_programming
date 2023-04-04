#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 *add_node - add new node to beggining of list
 *@head: pointer to list_t pointer
 *@str: copied string
 *Return: address of new node or NULL if failure
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *nu_node;

	nu_node = malloc(sizeof(list_t));
	if (!nu_node)
		return (NULL);

	nu_node->str = strdup(str);
	nu_node->next = (*head);
	(*head) = nu_node;

	return (*head);
}
