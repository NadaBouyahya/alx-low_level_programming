#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry function
 * Return: 0
 */
int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (last > 5)
		printf("the last digit of %d is %d and is greater than 5\n", n, last);
	if (last == 0)
		printf("the last digit of %d is %d and is zero\n", n, last);
	else
	{
		printf("the last digit of %d is %d and is less than 6", n, last);
		printf(" and not zero\n");
	}
	return (0);
}
