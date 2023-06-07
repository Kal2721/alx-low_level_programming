#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen_recursion - prints string length
 * @s: the string to be printed
 *
 * Return: the number of strings
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
