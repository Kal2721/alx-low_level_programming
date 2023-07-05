#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * factorial - prints a factorial of a given number
 * @n: the number
 *
 * Return: factorial or -1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);

	return (n * factorial(n-1));
}
