#include "main.h"

/**
 * is_prime_number - checks whether or not a number is prime
 * @n: the number to be checked
 *
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	int i;

	if (n == 0 || n == 1)
		return (0);

	for (i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
			return (0);
		else
			return (1);
	}
	return (0);
}
