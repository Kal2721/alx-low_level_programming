#include <stdio.h>
/**
 * main - All possible combinations of two two digit numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, e, g, h, op1, op2;	
	 i = 48;
	 e = 48;
	 g = 48;
	 h = 48;

	while (h < 58)
	{
		g = 48;
		while (g < 58)
		{
			e = 48;
			while (e < 58)
			{
				i = 48;
				while (i < 58)
				{
					op1 = (h * 10) + g;
					op2 = (e * 10) + i;
					if (op1 < op2)
					{
						putchar(h);
						putchar(g);
						putchar(' ');
						putchar(e);
						putchar(i);
				if (h == 57 && g == 56 && e == 57 && i == 57)
							break;
						putchar(',');
						putchar(' ');
					}
					i++;
				}
				e++;
			}
			g++;
		}
		h++;
	}
	putchar('\n');
	return (0);
}		