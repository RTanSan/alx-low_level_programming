#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 *
 * Return: return 0 (success)
 */
int main(void)
{
	int n = '0';
	char m;

	for (n = '0'; n <= '9'; n++)
	{
		putchar (n);
	}
	for (m = 'a'; m <= 'f'; m++)
	{
		putchar (m);
	}
	putchar ('\n');
	return (0);
}
