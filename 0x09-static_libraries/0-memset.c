#include "main.h"
/**
 * _memset - Entry point
 * @s: starting add of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 * Return: always 0 (success)
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
s[i] = b;
return (s);
}
