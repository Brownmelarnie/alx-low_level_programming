#include <stdio.h>
#include "main.h"

/**
* main - takes a date and prints how many days are left in the year, taking
* leap years into account
* Return: 0
*/

int main(void)
{
	/*
	 * 02/29/2000
	 * 04/01/1997
	 */

	int day = convert_day(04, 01);

	print_remaining_days(4, day, 1997);

	return (0);
}
