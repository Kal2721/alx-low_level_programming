#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: the charscter to be allocated
 *
 * Return: a pointer
 */
char *_strdup(char *str)
{
	int x = 0;
	int i = 1;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}

	s = malloc(((sizeof(char)) * i) + 1);

	if (str == NULL)
		return (NULL);

	while (x < i)
	{
		s[x] = str[x];
		x++;
	}

	s[x] = '\0';
	return (s);
}

