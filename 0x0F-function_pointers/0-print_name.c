#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name -  prints a name.
 * @name: a string) that represents a name.
 * @f: printing individual characters of the name.
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL || f != NULL)
	{
		f(name);
	}
}
