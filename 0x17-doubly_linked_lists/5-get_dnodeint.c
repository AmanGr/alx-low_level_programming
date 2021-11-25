#include "lists.h"
#include <stdio.h>
/**
* get_dnodeint_at_index - Entry point
* @head: head
* @index: index
* Return: Always 0 (Success)
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (!head)
		return (NULL);

	if (index == 0)
		return (head);

	return (get_dnodeint_at_index(head->next, index - 1));
}
