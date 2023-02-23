#include "main.h"

/**
 * main - prints the numbers from 1 to 100 folow by a new line
 * but for multiples of three print Fizz
 * and for multiples of fice print buzz
 * for both three and five print FizzBuzz
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			_putchar(" Fizz");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			_putchar(" Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			_putchar(" FizzBuzz");
		}
		else if (i == 1)
		{
			_putchar("%d", i);
		}
		else
		{
			_putchar(" %d", i);
		}
	}
		_putchar("\n");
		return (0);
}
