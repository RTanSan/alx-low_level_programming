#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase
 *
 * Return: return 0 (always)
 */
int main(void)
{
	char n = 0;
	char m = 0;

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar (n);
	}
	for (m = 'A'; m <= 'Z'; m++)
	{
		putchar (m);
	}
	putchar('\n');
	return (0);
}
