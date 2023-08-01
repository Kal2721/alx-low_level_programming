#include <stdio.h>
#include "lists.h"

/**
 * listint_len - prints the number of elements in the linked list
 * @h: the head
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	if (h != NULL)
	{
		while (h)
		{
			h = h->next;
			count++;
		}
	}

	return (count);
}
