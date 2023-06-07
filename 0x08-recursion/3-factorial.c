#include "main.h"
#include <stdio.h>

/**
 *factorial - return a factorial of a number
 *@n: the integer
 *
 *Return: -1, 1 and factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
