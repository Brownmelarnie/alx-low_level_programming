#include <stdio.h>
#include "main.h"

/**
 * main - debugging
 * Return: 0
 */
int main(void)
{
	int month = 2;
	int day = 29;
	int year = 2000;

	printf("Date: %02d/%02d/%04d\n", month, day, year);


	day = convert_day(02, 29);

	print_remaining_days(2, day, 2000);

	return (0);
}
