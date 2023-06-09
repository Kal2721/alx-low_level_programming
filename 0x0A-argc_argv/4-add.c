#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - ...
 * @argc: ...
 * @argv: ...
 *
 * Return: ...
 */
int main(int argc, char *argv[])
{
	int x;
	unsigned int k, y = 0;
	char *ch;
	
	if (argc > 1)
	{
		for (x = 1; x < argc; x++)
		{
			ch = argv[x];

			for (k = 0; k < strlen(ch); k++)
			{
				if (ch[k] < 48 || ch[k] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			
			y += atoi(ch);
			ch++;
		}

		printf("%d\n", y);
	}

	else 
	{
		printf("0\n");
	}
	return (0);
}
