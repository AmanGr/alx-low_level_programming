#include "lists.h"
#include <stdio.h>
/**
* add_dnodeint - Entry point
* @head: head
* @n: value to add
* Return: Always 0 (Success)
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	if (*head)
		(*head)->prev = new_node;

	*head = new_node;
	return (*head);
}
