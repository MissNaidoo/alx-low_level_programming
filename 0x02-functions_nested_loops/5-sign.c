#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @d: the int to check
 * Return: 1 and prints + if d is greater than zero
 * -1 and prints - if d is less than zero or 0 if d is zero
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
		return (0);
	} else
	{
		_putchar('0');
		return (0);
	}
}
