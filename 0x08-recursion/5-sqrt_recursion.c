#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - return square root of a number
 * @n: the squared number
 *
 * Return: the square root result
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - ...
 * @n: ...
 * @i: ...
 *
 * Return: ...
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}