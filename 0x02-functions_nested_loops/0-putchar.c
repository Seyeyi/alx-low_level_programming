#include <stdio.h>
/**
 * program that prints _putchar, followed by a new line
 *
 * return 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
