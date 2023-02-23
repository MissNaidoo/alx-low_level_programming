# include "main.h"

/**
 * print_numbers - check if number 0 - 9 prints
 * @i: char to be checked
 *
 * Return: 0
 */

void print_numbers(void)
{
	int i;

	if (i >= '0' && i <= '9')
	{
		putchar(i);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
