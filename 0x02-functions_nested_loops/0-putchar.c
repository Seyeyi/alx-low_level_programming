#include <stdio.h>
#include"main.h"


/**
 * program that prints _putchar, followed by a new line
 *
 * return 0
 */

int main(void)
{

	int i;
	char put[8] = "_putchar";

	for (i = 0; i <= 8; i++)
	{
		_putchar (put[i]);
	}
	_putchar ('\n');
	return (0);
}

