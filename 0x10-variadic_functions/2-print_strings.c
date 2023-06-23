#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return:
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;

	va_start(args, n);

	if (separator != NULL)
	{
		separator = "\n";
	}

	else
	{
		printf("(nil\n");
	}

	va_end(args);
	printf("\n");
}
