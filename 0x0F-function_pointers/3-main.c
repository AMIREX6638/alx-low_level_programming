#include "3-calc.h"

/**
 * main - program
 * @argc: number
 * @argv: array
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int arg1, arg2, result;
	char o;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);

	func = get_opfunc(argv[2]);

	if (!func)
	{
		print
