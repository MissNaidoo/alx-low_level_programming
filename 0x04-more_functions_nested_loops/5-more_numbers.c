#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers since 0 up to 14
 * @x: int to check
 * @y: int to check
 *
 * Return: 0 success
 */

void more_numbers(void);
{
	int i;
	int j;

	while (i <= 9)
	{
		j = 0;
		while (j <= 14)
			{
			_putchar("\%d", j);
			j++;
			}
		_putchar("\n");
	}
	return (0);
}
