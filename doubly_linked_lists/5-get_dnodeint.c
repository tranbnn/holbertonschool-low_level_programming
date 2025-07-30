#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a list
 * @head: head of the list
 * @index: the index of the node
 * Return: the nth node of a list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (head && index != 0)
	{
		head = head->next;
		index--;
	}

	if (head && index == 0)
	{
		return (head);
	}
	return (NULL);
}
