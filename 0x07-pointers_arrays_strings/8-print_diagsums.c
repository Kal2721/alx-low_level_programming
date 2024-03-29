#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals of a square matrix
 * @a: the matrix
 * @size: the size
 *
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int s1 = 0, s2 = 0;
	int b;

	for (b = 0; b < size; b++)
	{
		s1 += a[(size + 1) * b];
		s2 += a[(size - 1) * (b + 1)];
	}
	printf("%d, %d\n", s1, s2);
}
