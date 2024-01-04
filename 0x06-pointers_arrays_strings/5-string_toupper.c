#include "main.h"

/**
 * string_toupper - all lowercase letters of a string to uppercase
 * @p: an array
 *
 * Return: an array
 */
char *string_toupper(char *p)
{
	int x = 0;

	while (p[x])
	{
		if (p[x] >= 97 && p[x] <= 122)
		{
			p[x] -= 32;
		}
		x++;
	}
	return (p);
}
