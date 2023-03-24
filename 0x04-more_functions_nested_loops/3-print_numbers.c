#include "main.h"

/**
 * print_numbers - print 0-9
 * return: The numbers since 0 up to 0
 */

void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
