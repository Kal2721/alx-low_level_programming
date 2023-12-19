#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number whose last digit is to be printed
 *
 * Return: last digit of the number
 */
int print_last_digit(int n)
{
	int ld;

	ld = n % 10;

	if (ld < 0)
	{
		ld = ld * -1;
	}

	_putchar(ld + '0');

	return (ld);
}
