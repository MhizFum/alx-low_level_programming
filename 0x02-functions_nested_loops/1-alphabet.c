#include "main.h"

/**
 * main - print_alphabet in low cases
 * print_alphabet - print_alphabet in lower case
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
