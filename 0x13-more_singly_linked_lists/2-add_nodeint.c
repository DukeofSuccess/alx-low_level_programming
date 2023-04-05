#include "lists.h"

/**
 *add_nodeint - Adds new node at beginning of list
 *@head: double pointer to listint_t
 *@n: interger to be stored in new node
 *Return: address of new element/ NULL if failure
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	temp->n = n;
	temp->next = NULL;

	temp->next = (*head);
	(*head) = temp;
	return ((*head));
}
