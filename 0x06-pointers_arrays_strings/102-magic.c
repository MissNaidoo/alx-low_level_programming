#include <stdio.h>
/**
 * main - prints a[2] = 98
 * Return: 98
 */
int main(void)
{
	int n;
	int b[5];
	int *p;

	b[2] = 1024;
	p = &n;

	*(p + 5) = 98;
	printf("a[2] - $d\n", b[2]);
	return (0);
}
