#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t
 * @head: pointer pointing to the beginning of the list
 * @str:i the string to be inside the new node
 * Return: the address of the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	int count;
	list_t *temp;

	count = 0;

	temp = malloc(sizeof(list_t));

	if (temp == NULL)
	{
		return (NULL);
	}

	temp->str = strdup(str);

	while (str[count] != '\0')
	{
		count++;
	}

	temp->len = count;
	temp->next = *head;
	*head = temp;
	return (temp);
}
