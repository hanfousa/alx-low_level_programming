#include "main.h"

/**
 * set_bit - sets a bit at the given index to 1
 * @n: pointer to number to  be changed
 * @index: index of bit to set to 1
 *
 * Return: 1 for success, -1 for error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
