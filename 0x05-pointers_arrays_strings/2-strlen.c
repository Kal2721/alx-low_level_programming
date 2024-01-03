#include "main.h"

/**
 * _strlen - returns the lengths of a string
 * @s: ...
 *
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int n;

	for (n = 0; *s != '\0'; s++)
		n++;
	return (n);
}
