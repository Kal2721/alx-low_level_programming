#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: the string to be duplicated
 *
 * Return: str
 */
char *_strdup(char *str)
{
	int b = 0, i = 1;
	char *v;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}

	v = malloc((sizeof(char) * i) + 1);

	if (v == NULL)
		return (NULL);

	while (b < i)
	{
		v[b] = str[b];
		b++;
	}
	v[b] = '\0';
	return (v);
}
