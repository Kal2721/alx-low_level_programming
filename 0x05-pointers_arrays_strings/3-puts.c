#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string
 * @str: a string to be printed
 *
 * Return: Nothing
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
