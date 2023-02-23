#include "main.h"

/**
 * print_most_numbers - Prints numbers 0 1 3 5 6 7 8 9
 * @i: int to check
 *
 * Return: 0 or 1
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 && i == 4)
		{
			continue;
		}
		else
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
