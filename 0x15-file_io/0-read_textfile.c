#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a text file and
 * prints it to the POSIX standard output.
 * @filename: //
 * @letters: //
 * Description: where letters is the number of letters it should read and print
 *
 * Return: returns the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *textfile;
	char ch;
	size_t i = 0;

	if (filename == NULL)
	{
		return (0);
	}

	textfile = fopen(filename, "r");
	if (textfile == NULL)
	{
		return (0);
	}

	for (; i < letters; i++)
	{
		ch = fgetc(textfile);
		if (ch == EOF)
		{
			if (i == 0)
			{
				break;
			}
		}
		putchar(ch);
	}

	fclose(textfile);

	return (i);
}
