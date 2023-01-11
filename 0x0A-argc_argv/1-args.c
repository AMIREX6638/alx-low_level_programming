#include <stdio.h>
#include "main.h"

/**
 * main - print the number
 * @argc: numbe of arguments
 * @argv: array
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	(void) argv; /*Ignore it*/
	printf("%d\n", argc - 1);
return (0);
}

