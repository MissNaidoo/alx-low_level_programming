#include "main.h"
/**
 * swap_int - Swaps the values of two integers
 * @a: first int
 * @b: second int
 * Return: int a and b
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
