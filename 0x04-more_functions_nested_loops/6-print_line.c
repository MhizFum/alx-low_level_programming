#include "main.h"

/**
 * print_line - print a straight line
 * @n: number of '_' to be printed
 */

void print_line(int n)
{
	int bc;

	if (n > 0)
	{
		for (bc = 0; bc < n; bc++)
			_putchar('_');
	}

	_putchar('\n');
}
