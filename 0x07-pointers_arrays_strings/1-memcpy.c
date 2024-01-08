#include "main.h"
#include <string.h>

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: destintion file where the data is copied to
 * @src: source file from where the data is copied
 * @n: number of bytes to be copied
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
