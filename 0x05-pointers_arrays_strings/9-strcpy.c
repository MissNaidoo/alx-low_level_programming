#include "main.h"
/**
 * _strcpy - copies the string point to be src
 * @dest: the buffer to be pointed (destination)
 * @src: source
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int l;

	for (l = 0; src[l] != '\0'; l++)
{
	dest[l] = src[l];
}
dest[l++] = '\0';
return (dest);
}
