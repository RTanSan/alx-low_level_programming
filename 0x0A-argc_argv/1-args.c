#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into it.
 * @argc: interger argument
 * @argv: character argument
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc == 1)
	{
		printf("\n");
	}

	else
	{
		printf("%d\n", argc - 1);
		printf("%s\n", argv[0]);
		for (i = 1; i < argc; i++)
		{
			printf("%d %s\n", i, argv[i]);
		}
	}

	return (0);
}
