#include "main.h"

/**
 * binary_to_uint - convert a binary number to the unsigned int
 * @b: string that contains the binary number
 *
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int l;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (l = 0; b[l]; l++)
	{
		if (b[l] < '0' || b[l] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[l] - '0');
	}

	return (dec_val);
}
