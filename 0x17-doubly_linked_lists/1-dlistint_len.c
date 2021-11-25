#include "lists.h"

/**
* dlistint_len - Print linked int
* @h: node of a dlistint t
* Return: Always 0 (Success)
*/
size_t dlistint_len(const dlistint_t *h)
{
	/* Base case */
	if (h == NULL)
		return (0);
	/* Sumetion */
	return (1 + dlistint_len(h->next));
}
