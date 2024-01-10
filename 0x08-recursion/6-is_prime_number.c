#include "main.h"
#include <math.h>

int check(int n, int i);

/**
 * is_prime_number - checks whether or not a number is prime
 * @n: the number to be checked
 *
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	return (check(n, 1));
}

/**
 * check - to check the numbers parity
 * @n: number to be checked
 *
 * Return: 1 or 0
 */
int check(int n, int i)
{
	if (n <= 1)
		return (0);

	for (i = 2; i <= n / i; i++)
	{
		if (n % i == 0)
			return (0);
	}
	if ((n / i) < i)
		return (1);

	return (0);
}
