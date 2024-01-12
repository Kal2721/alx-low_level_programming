#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument court
 * @argv: argument value
 *
 * Return: zero and one for error
 */
int main(int argc, char *argv[])
{
	int n;
	int m;

	if (argc == 3)
	{
		n = atoi(argv[1]);
		m = atoi(argv[2]);
		printf("%d\n", n * m);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
