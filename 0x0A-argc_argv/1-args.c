#include "main.h"
#include <stdio.h>
/**
 * main - Prints its name
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
printf("%d\n", argc - 1);
return (0);
}
