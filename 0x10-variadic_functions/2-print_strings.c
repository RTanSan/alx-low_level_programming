#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * If separator is NULL, don’t print it
 * If one of the string is NULL, print (nil) instead
 * Print a new line at the end of your function
 *
 * Return:
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	char *string;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(args, char *);

	if (string != NULL)
	{
		printf("%s", string);
	}

	else
	{
		printf("(nil\n");
	}

	if (separator != NULL || i != n - 1)
	{
		printf("%s", separator);
	}
	}

	va_end(args);
	printf("\n");
}
