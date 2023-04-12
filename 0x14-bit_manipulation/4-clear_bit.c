#include "main.h"

/**
 * clear_bit - clear bit to 0 at a given index
 * @n: number
 * @index: index within binary number
 * Return: 1 if success, or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = 1;

	if (index > 63)
		return (-1);

	num = 1 << index;

	if (*n & num)
		*n ^= num;
	/*bitwise AND operator*/

	return (1);
}
