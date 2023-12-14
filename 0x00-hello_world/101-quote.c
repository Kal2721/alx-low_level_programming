#include <unistd.h>
#include <string.h>

/**
 * main - prints a sentence without using puts or printf
 *
 * Return: one
 */
int main(void)
{
	char* a = "\"and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	size_t length = strlen(a);

	write(1, a, length);

	return(0);
}
