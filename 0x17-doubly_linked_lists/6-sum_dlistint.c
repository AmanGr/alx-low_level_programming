#include "lists.h"
#include <stdio.h>
/**
* sum_dlistint - Entry point
* @head: l
* Return: Always 0 (Success)
*/
int sum_dlistint(dlistint_t *head)
{
	return ((!head ? 0 : head->n + sum_dlistint(head->next)));
}
