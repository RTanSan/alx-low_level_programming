#include <stdio.h>

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 *
 * Return: nothing to return
 */
void print_alphabet_x10(void)
{
	int m, o;
	char n[] = "abcdefghijklmnopqrstuvwxyz";

	for (o = 1; o <= 10; ++o)
	{
		for (m = 0; m < 26; m++)
		{
			putchar(n[m]);
		}
		putchar('\n');
	}
}
