#include "function_pointers.h"

/**
 * print_name - a function that prints a name.
 * @name: the pointer to varable.
 * @f: function to pointer.
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
