#include "lists.h"
/**
* free_dlistint - function that prints all the elements of a list_t list
* @head: node head of a own list
* Return: Always 0 (Success)
*/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	free_dlistint(head->next);
	free(head);
}
