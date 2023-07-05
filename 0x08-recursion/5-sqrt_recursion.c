#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number whose natural square root is calculated
 *
 * Return: the square rooted number
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - calculate naturl square root
 * @n: ...
 * @i: ...
 *
 * Return: the square rooted number
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if  (sqrt == n)
		return(i);

	return (_sqrt(n, i + 1));
}
