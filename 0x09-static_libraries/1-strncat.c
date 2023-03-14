#include "main.h"
/**
 * _strncat - Concatenates two strings
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: char dest and src
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;

while (dest[i] != '\0')
{
i++;
}

while (j < n && src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}

