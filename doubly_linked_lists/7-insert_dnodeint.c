#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to list
 * @idx: index position of new node
 * @n: value of new node
 * Return: the address of the new node, or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *cursor;

	if (h == NULL)
	{
		return (NULL);
	}

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	cursor = *h;
	while (idx > 1 && cursor && cursor->next)
	{
		cursor = cursor->next;
		idx--;
	}

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	if (idx > 1 || cursor == NULL)
	{
		return (NULL);
	}

	new->n = n;

	if (cursor->next != NULL)
	{
		cursor->next->prev = new;
	}
	new->prev = cursor;
	new->next = cursor->next;
	cursor->next = new;

	return (new);
}
