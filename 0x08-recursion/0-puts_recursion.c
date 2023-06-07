#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _puts_recursion - prints a string
 * @s: character to be printed
 *
 * Return: 0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);
}	
