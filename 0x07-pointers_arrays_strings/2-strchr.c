#include "main.h"
#include <stddef.h>

/**
 * _strchr - searches for a character in a string
 * @s: the string
 * @c: the character
 *
 * Return: first occurrence of c or NULL
 */
char *_strchr(char *s, char c)
{
	int i = 0, h;

	while (s[i])
	{
		i++;
	}

	for (h = 0; h <= i; h++)
	{
		if (c == s[h])
		{
			s += h;
			return (s);
		}
	}
	return ('\0');
}
