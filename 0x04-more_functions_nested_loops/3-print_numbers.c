# include "main.h"

/**
 * 3-print_numbers - check if number 0 - 9 prints
 * @i: char to be checked
 *
 * Return: 1 or 0
 */

void print_numbers(void)
{
	if (i >= '0' && i <= '9')
	{
		_putchar("/%d" '\n', i);
		return (1);
	else
		return (0);
}
