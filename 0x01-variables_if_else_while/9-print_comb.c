#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry function
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		if ( n == '9')
			continue;
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
