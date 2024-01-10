#include "main.h"

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root
 * @n: the number
 *
 * Return: the natural square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - calculated the square root
 * @n: the nunber whose sqrt is to be calculated
 * @i: iterate
 *
 * Return: the sqrt
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (n < 0 || sqrt > n)
		return (-1);

	if (n == sqrt)
		return (i);

	return (_sqrt(n, i + 1));
}
