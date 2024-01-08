#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to be scanned
 * @accept: contains the chx matching with s
 *
 * Return:  number of bytes in s consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j, k = 0;

	while (accept[i])
	{
		j = 0;

		while (s[j] != 32)
		{
			if (s[j] == accept[i])
			{
				k++;
			}

			j++;
		}

		i++;
	}
	return (k);
}
