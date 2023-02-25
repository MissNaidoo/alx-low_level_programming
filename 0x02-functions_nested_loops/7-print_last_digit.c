#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @a: to print last digit
 * Return: value of the last digit
 */
int print_last_digit(int a)
{
	int n;

	n = a % 10;
	if (n < 0)
	{
		n = n * -1;
	}
	_putchar(n + '0');
	return (n);
}
