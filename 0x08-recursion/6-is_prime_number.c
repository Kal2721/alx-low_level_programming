#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - ...
 * @n: the number to be checked
 *
 * Return: integer value
 */
int is_prime_number(int n)
{
	for (int i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}

		else
		{
			return (1);
		}
	}
}
