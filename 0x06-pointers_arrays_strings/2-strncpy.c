#include "main.h"
#include <string.h>

/**
 * _strncpy - copies a string
 * @dest: destination file
 * @src: source file
 * @n: The copy limit
 *
 * Return: char value
 */
char *_strncpy(char *dest, char *src, int n)
{
	int size = 0;

	size = strnlen(src, n);

	if (size != n)
		memset(dest + size, '\0', n - size);
	return memcpy(dest, src, size);
}
