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
	list_t *end_node, temp;
	end_node = (*head);
	unsigned int lenstr = 0;

	while (str[lenstr])
		lenstr++;

	temp = malloc(sizeof(list_t));

	if (!temp)
		return (NULL);

	temp->str = strdup(str);
	temp->len = lenstr;
	temp->next = NULL;

	while (end_node->next != NULL)
	{
		end_node = end_node->link;
	}
	end_node->next = temp;


	return (*head);

}
