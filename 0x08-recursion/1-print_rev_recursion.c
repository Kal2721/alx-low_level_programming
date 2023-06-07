#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - prints a reverse of a string
 * @s: the string to be printed
 *
 * Return: non
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
