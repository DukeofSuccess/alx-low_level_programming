#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 *add_node - add new node to beggining of list
 *@head: pointer to list_t pointer
 *@str: copied string
 *Return: address of new node or NULL if failure
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int lenstr = 0;
	list_t *end_node;
	list_t *temp = *head;

	while (str[lenstr])
		lenstr++;

	end_node = malloc(sizeof(list_t));

	if (!end_node)
		return (NULL);

	end_node->str = strdup(str);
	end_node->len = lenstr;
	end_node->next = NULL;

	if (*head == NULL)
	{
		*head = end_node;
		return (end_node);
	}

	while (end_node->next != NULL)
	{
		end_node = end_node->next;
	}
	end_node->next = temp;


	return (end_node);

}
