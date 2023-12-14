#include <unistd.h>
#include <string.h>

/**
 * main - prints a sentence without using puts or printf
 *
 * Return: one
 */
int main(void)
{
	char *a = "\"and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	write(1, a, strlen(a));

	return (1);
}
