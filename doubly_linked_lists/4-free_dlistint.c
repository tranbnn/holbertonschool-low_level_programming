#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: the head of the list
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		free_dlistint(head->next);
		free(head);
	}
}
