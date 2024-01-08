#include "main.h"

/**
 * _strbrk - searches a string for any of a set of bytes
 * @s: sourcd file
 * @accept: accepted character
 *
 * Return: byte in s, or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int x = 0, y;

	while (s[x])
	{
		y = 0;

		while (accept[y])
		{
			if (s[x] == accept[y])
			{
				s += x;
				return (s);
			}

			y++;
		}

		x++;
	}

	return('\0');
}
