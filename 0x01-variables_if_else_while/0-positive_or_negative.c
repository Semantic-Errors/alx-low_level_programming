#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program assigns a random number to the variable n
 *			and prints whether n is positive or negative or zero
 *
 * Return: Always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("%d ", n);

	if (n > 0)
		puts("is positive");
	else if (n < 0)
		puts("is negative");
	else
		puts("is zero");

	return (0);
}
