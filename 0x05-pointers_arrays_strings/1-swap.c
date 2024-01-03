#include "main.h"

/**
 * swap_int - swaps the vlue of two integers
 * @a: the integer whose value is to be swaped
 * @b: the integer whose value is to be swaped
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
