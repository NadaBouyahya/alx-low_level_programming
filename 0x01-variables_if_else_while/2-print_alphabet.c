#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry function
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
