#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - creates a file.
 * @filename: name of the file to create
 * @text_content: a "NULL" terminated string to write to the file
 *
 * Description: The created file must have those permissions:
 * rw-------. If the file already exists,
 * do not change the permissions.
 *
 * Return: if the file already exists, truncate it
 * if filename is NULL return -1
 * if text_content is NULL create an empty file
 */
int create_file(const char *filename, char *text_content)
{
	FILE *fp;
	size_t i = 0;

	if (filename == NULL)
	{
		return(-1);
	}

	fp = fopen(filename, "w");
	if (fp == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{

	for (i = 0; text_content[i] != '\0'; i++)
	{
		fputc(text_content[i], fp);
	}
	}

	fclose(fp);
	return (-1);
}
