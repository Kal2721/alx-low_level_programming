#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - adds a new node
 * @head: ...
 * @str: ...
 *
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	if (head != NULL && str != NULL)
	{
		temp = malloc(sizeof(list_t));
		if (temp == NULL)
			return (NULL);

		temp->str = strdup(str);
		temp->len = strlen(str);
		temp->next = *head;

		*head = temp;

		return (temp);
	}

	return (0);
}

/**
 * _strlen - returns the length of the string
 * @s: ....
 *
 * Return: string length
 */
int _strlen(const char *s)
{
	int c = 0;
	
	while (*s)
	{
		s++;
		c++;
	}

	return (c);
}
