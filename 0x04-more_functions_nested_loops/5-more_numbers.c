#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers since 0 up to 14
 */

void more_numbers(void);
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 1; j <= 14; j++)
		{
			if (j >= 9)
				_putchar('1');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
