#include "main.h"
#include <stdio.h>

/**
 * _isalpha -  checks for alphabetic character
 * c: The alphaber to be checked
 *
 * Return: 1 if alpha or 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	putchar('\n');
	return (0);
}
