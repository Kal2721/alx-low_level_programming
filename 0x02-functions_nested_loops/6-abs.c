#include "main.h"
#include <stdio.h>

/**
 * _abs - computes the absolute value of an integer
 * @i: the number whose absolute value is to be computed
 *
 * Return: always 0
 */
int _abs(int i)
{
	if (i < 0)
	{
		int absv;

		absv = i * -1;

		return (absv);
	}
	return (i);
}
