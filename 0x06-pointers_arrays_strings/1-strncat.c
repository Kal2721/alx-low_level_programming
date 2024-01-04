#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings
 * @dest: ...
 * @src: ...
 * @n: number of bytes from src
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int j = 0;

	dest += strlen(dest);

	j = strnlen(src, n);

	dest[j] = '\0';
	memcpy(dest, src, j);

	return (dest);
}
