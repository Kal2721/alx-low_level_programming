#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * @size: size of the array
 * @c: the character in the array
 *
 * Return: the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *v;

	if (size == 0)
		return (NULL);

	v = malloc(size * sizeof(char));

	if (v == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		v[i] = c;
	}

	return (v);
}
