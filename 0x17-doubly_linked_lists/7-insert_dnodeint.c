#include "lists.h"
#include <stdio.h>
/**
 * create_node - make node and define pointer to NULL
 * @new_node: pointer to the variable storage the pointer to new node
 * @n: value or data to storage in node
 * Return: new node or NULL if fail
 */
dlistint_t *create_node(dlistint_t **new_node, int n)
{
	*new_node = malloc(sizeof(dlistint_t));
	if (!*new_node)
		return (NULL);
	(*new_node)->n = n;
	(*new_node)->next = NULL;
	(*new_node)->prev = NULL;
	return (*new_node);
}

/**
* insert_dnodeint_at_index - Entry point
* @h: head
* @idx: index
* @n: index
* Return: Always 0 (Success)
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;

	if (!h)
		return (NULL);
	if (idx == 0)
	{
		if (!create_node(&new_node, n))
			return (NULL);
		new_node->next = *h;
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	if (!*h)
		return (NULL);
	if (!(*h)->next && idx == 1)
	{
		if (!create_node(&new_node, n))
			return (NULL);
		new_node->prev = *h, (*h)->next = new_node;
		return (new_node);
	}
	if (idx == 1)
	{
		if (!create_node(&new_node, n))
			return (NULL);
		new_node->prev = *h;
		if (*h)
			new_node->next = (*h)->next, (*h)->next->prev = new_node,
			(*h)->next = new_node;
		else
			*h = new_node;
		return (new_node);
	}
	return (insert_dnodeint_at_index(&(*h)->next, idx - 1, n));
}
