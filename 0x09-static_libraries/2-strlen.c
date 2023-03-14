#include "main.h"
/**
 * _strlen - Returns the length of a string
 * @s: The int that determines the length of
 * Return: the length s
 */
int _strlen(char *s)
{
size_t length = 0;

while (*s++)
length++;
return (length);
}
