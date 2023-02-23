#include "main.h"

/**
 * print_line - Prints a straight line
 * @n: number of times the char | should be printed
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
				if (j == i)
					_putchar('\|');
				else if (j < i)
					_putchar('\n');
		}
	}
}
