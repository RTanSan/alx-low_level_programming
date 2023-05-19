#include <stdio.h>

/**
 * main - Write a program that prints the alphabet in lowercase,
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char a = 0;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar (a);
	}
	putchar ('\n');
	return (0);
}
