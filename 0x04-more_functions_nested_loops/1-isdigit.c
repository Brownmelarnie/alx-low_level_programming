#include "main.h"

/**
 * _isdigit - function to check for a digit
 * @c: function parameter
 *
 * Return: always success
 *
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	return (1);
	else
		return (0);
}
