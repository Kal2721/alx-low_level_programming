#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: araay of integers
 * @n: the number of elements of the array
 *
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int *p, i, swap, j;

	p = a;

	for (i = 1; i < n; i++)
	{
		p++;
	}

	for (j = 0; j < i / 2; j++)
	{
		swap = a[j];
		a[j] = *p;
		*p = swap;
		p--;
	}
}
