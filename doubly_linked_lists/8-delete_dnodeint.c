#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a list
 * @head: pointer to head of a list
 * @index: the index of the node that should be deleted
 * Return: 1 if succeeded, -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cursor;

	cursor = *head;

	if (head == NULL)
	{
		return (-1);
	}

	if (head)
	{
		while (index && cursor)
		{
			cursor = cursor->next;
			index--;
		}
		if (index)
		{
			return (-1);
		}
		if (!index && cursor)
		{
			if (cursor->next)
			{
				cursor->next->prev = cursor->prev;
			}
			if (cursor->prev)
			{
				cursor->prev->next = cursor->next;
			}
			else
			{
				*head = cursor->next;
			}
			free(cursor);
			return (1);
		}
	}
	return (-1);
}
