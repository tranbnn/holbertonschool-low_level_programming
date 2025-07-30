#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: pointer to head of list
 * @n: the string to be copied into the new node
 * Return: address of the new element, or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tempnode;
	dlistint_t *newnode;

	tempnode = NULL;
	newnode = malloc(sizeof(dlistint_t));

	if (newnode)
	{
		newnode->n = n;

		if (*head)
		{
			tempnode = *head;
			while (tempnode->next)
			{
				tempnode = tempnode->next;
			}
			tempnode->next = newnode;
			newnode->prev = tempnode;
		}
		else
		{
			*head = newnode;
		}
	}
	return (newnode);
}
