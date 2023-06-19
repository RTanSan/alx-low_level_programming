#include <stdio.h>
#include "main.h"
/**
 * main - prints the name of the file it was compiled from
 * , followed by a new line.
 *
 * Return: return 0 (success)
 */
int main(void)
{
	int n = 0;
	char m[] = __FILE__;

	while (m[n] != '\0')
	{
		putchar(m[n]);
		n++;
	}

	putchar('\n');
	return (0);
}
