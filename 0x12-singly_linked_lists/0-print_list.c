#include <stdio.h>
#include "lists.h"

/**
 * print_list - entry point
 * @h: list_t variable
 *
 * Return: size_t
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		i++;
		h = h->next;
	}

	return (i);
}
