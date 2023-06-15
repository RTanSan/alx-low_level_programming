#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * main - a program that prints all arguments it receives.
 * All arguments should be printed, including the first one
 * Only print one argument per line, ending with a new line
 * @argc: stores total number of arguments
 * @argv: stores the arrays of strings
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n" ,argv[i]);
	}

	return (0);
}
