#include <stdio.h>

/**
 * _islower - Check for lower case character
 *
 * Return: Always 0 (success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else 
	{
		return (0);
	}
	putchar('\n');
}
