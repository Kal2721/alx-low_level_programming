#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings
 * @dest: ...
 * @src: ...
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	strcpy(dest + strlen(dest), src);
	return (dest);
}
