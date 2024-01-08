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
	char ch;

	ch = c;
	for (;; s++)
	{
		if (*s == '\0')
			return (NULL);
		if (*s == ch)
			return ((char *)s);
	}
}
