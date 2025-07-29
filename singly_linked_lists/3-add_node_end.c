#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list
 * @head: the beginning of the list
 * @str: the string to be duplicated into the node
 * Return: the address of the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int count;
	list_t *endnode;
	list_t *cursor;

	count = 0;

	endnode = malloc(sizeof(list_t));

	if (endnode == NULL)
	{
		return (NULL);
	}

	if (str)
	{
		endnode->str = strdup(str);
		while (str[count] != '\0')
		{
			count++;
		}
		endnode->len = count;
	}
	else
	{
		endnode->str = NULL;
		endnode->len = 0;
	}

	endnode->next = NULL;

	if (*head)
	{
		cursor = *head;

		while (cursor->next != NULL)
		{
			cursor = cursor->next;
		}
		cursor->next = endnode;
	}
	else
	{
		*head = endnode;
	}
	return (endnode);
}
