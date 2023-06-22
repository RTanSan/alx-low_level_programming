#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - should contain my main function only.
 * @argc:
 * @argv:
 *
 * Return: return 0 (success)
 */
int main(int argc, char *argv)
{
	int num1, num2, result;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op_func = get_op_func(argv[2]);

	return (0);
}
