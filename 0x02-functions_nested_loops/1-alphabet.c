#include "main.h"

/**
 * print_alphabet - Entry function
 * Description: print the alphabet in lowercase
 * Return: nothing.
 */
void print_alphabet(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
