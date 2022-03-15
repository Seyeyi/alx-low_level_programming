#include "main.h"

/**
 * print_alphabet - check main
 *
 * Return: always 0.
 */
void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar (alpha);
		alpha++;
	}
	_putchar ('\n');
}

