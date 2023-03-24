#include "main.c"

/** print_name - Prints a name
 * @name: The name to be printed
 * @f: Pointer to a function
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}

