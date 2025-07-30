#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data of a list
 * @head: the head of a list
 * Return: the sum of all data, or 0
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *cursor;

	cursor = head;

	while (cursor)
	{
		sum += cursor->n;
		cursor = cursor->next;
	}
	return (sum);
}
