#include <stdio.h>
#include "main.h"

/**
 * main - prints its name
 *
 * Return: return 0 (success)
 */
int main(int n, char *m[])
{
	if (n == 0)
	{
		return (0);
	}

	printf("%s\n", m[0]);
	return (0);
}
