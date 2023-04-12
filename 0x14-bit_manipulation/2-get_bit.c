#include "main.h"

/**
 * get_bit - get bit at index
 * @n: number
 * @index: index within binary number
 * Return: bit 0 or 1, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int b;

	if (n == 0 && index < 64)
		return (0);

	for (b = 0; b <= 63; n >>= 1, b++)
	{
		if (index == b)
		{
			return (n & 1);
		}
	}

	return (-1);
}
