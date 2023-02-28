#include "main.h"
/**
 * _puts - prints a string followed by a new line
 * @str: the char that returns the string
 * Return: char str
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_puts(str++);
	}
	_puts('\n');
}
