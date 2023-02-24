#include "main.h"

/**
 * prints_number - prints numbers
 *
 * Return: void;
 */
void print_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		_putchar(x + '0');
	}
	_putchar('\n');
}
