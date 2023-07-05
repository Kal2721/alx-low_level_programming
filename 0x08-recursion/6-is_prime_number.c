#include "main.h"
#include <stdio.h>

int prime_check(int n, int f);

/**
 * is_prime_number - check wether prime or not
 * @n: the number to be checked
 *
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	return (prime_check(n, 1));
}

/**
 * prime_check - check weather prime or not
 * @n: ...
 * @f: ...
 *
 * Return: 1 or 0
 */
int prime_check(int n, int f)
{
	if (n <= 1)
		return (0);

	if (n % f == 0 && f > 1)
		return (0);

	if ((n / f)  < f)
		return (1);

	return (prime_check(n, f + 1));
}
