#include "main.h"

/**
 * _isalpha - checks if char is an alphabet
 * @c: c to be checked
 * Return: 1 if an alphabet, otherwise 0
 */
int _isalpha(int c)
{

	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
