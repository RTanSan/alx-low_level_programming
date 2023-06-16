#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1:
 * @s2:
 * @n:
 *
 * Return:
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pnt;
	unsigned int i, j, t1 = 0, t2 = 0;

	if (s1 == NULL)
	{
		return (0);
	}

	if (s2 == NULL)
	{
		return (0);
	}

	while (s1[t1] != '\0')
	{
		t1++;
	}

	while (s2[t2] != '\0')
	{
		t2++;
	}

	if (n >= t2)
	{
		n = t2;
	}

	pnt = malloc(sizeof(char) * (t1 + n + 1));

	if (pnt == NULL)
	{
		return (NULL);
	}

	while (i < t1)
	{
		pnt[i] = s1[i];
		i++;
	}

	while (j < n)
	{
		pnt[i] = s2[j];
		i++;
		j++;
	}

	pnt[i] = '\0';

	return (pnt);
}
