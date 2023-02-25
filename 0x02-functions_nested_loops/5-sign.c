#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @d: the int to check
 * Return: 1 if d is greater than or equal to 0, 1 if d is less than 0
 */
int print_sign(int d)
{
	if (d > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (d < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
