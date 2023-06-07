#include "main.h"
#include <stdio.h>

/**
 *_pow_recursion - print x to the power of y
 *@x: the number to be raised
 *@y: the number x is raised by
 *
 *Return: -1 and sqrt of x
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
