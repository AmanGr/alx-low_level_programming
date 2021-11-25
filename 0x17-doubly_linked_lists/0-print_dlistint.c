#include "lists.h"

/**
* print_dlistint - Print linked int
* @h: node of a dlistint t
* Return: Always 0 (Success)
*/
size_t print_dlistint(const dlistint_t *h)
{
	/* Base case */
	if (h == NULL)
		return (0);
	/* print node */
	printf("%d\n", h->n);
	/* print node */
	return (1 + print_dlistint(h->next));
}
