#include "lists.h"

/**
 * add_node - entry point
 * @head: list_t variable
 * @str: char variable
 *
 * Return: list_t variable
 */

list_t *add_node(list_t **head, const char *str)
{

	char *dup;
	list_t *new_node;
	size_t size = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new_node);
		return (NULL);
	}


	while (str[size] != '\0')
		size++;

	new_node->str = strdup(str);
	new_node->len = size;

	new_node->next = *head;

	*head = new_node;
	return (new_node);
}
