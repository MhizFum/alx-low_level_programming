#include <unistd.h>
#include <main.h>

/**
 * _putchar - write the character c
 * @c: character to print
 * Return: On sucess 1 else -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
