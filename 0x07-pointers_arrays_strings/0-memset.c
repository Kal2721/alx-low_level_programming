#include "main.h"

/**
 * _memset - fills the first n bytes with b
 * @s: a pointer to the memory area
 * @b: the replacer
 * @n: memory area to be replaced
 *
 * Return: a pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
