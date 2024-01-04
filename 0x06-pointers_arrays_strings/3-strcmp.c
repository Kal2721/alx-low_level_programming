#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string to be compared
 * @s2: string to be compared
 *
 * Return: the comparizon
 */
int _strcmp(char *s1, char *s2)
{
	char c1, c2;

	do
	{
		c1 = *s1++;
		c2 = *s2++;

		if (c1 == '\0')
			return (c1 - c2);
	}
	while (c1 == c2);
	return (c1 - c2);
}
