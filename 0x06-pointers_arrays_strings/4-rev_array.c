#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: int to input
 * @n: reversed input
 * Return: a and n
 */
void reverse_array(int *a, int n)
{
	int i, t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
