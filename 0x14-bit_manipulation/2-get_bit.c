#include <stdio.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: value of bit
 * @index: value of index wanted
 *
 * Return:  value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return (n >> index) & 1;
}
