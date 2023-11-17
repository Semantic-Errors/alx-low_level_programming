#include <stdio.h>
#include <stdlib.h>

/* ARGSCOUNT - the args needed to the program (only 1 arg) */
#define ARGSCOUNT 2
/* COINSCOUNT - the number of coin values in money (25 coin, 10, 5, 2, 1)*/
#define COINSCOUNT 5

/**
 * main - program that prints the minimum number of coins
 *		to make change for an amount of money
 *
 * @argc: arguments counter
 * @argv: array of pointers to strings (arguments to the program)
 *
 * Return: (0) in sucess
 *	and (1) if the number of arguments passed to your program is not exactly 1
*/

int main(int argc, char **argv)
{
	int money, minimum_coins = 0;
	int i, coins_values[] = {25, 10, 5, 2, 1};

	if (argc != ARGSCOUNT)
	{
		puts("Error");
		exit(EXIT_FAILURE);
	}

	money = atoi(argv[argc - 1]);

	if (money > 0)
	{
		for (i = 0; i < COINSCOUNT; i++)
		{
			minimum_coins += money / coins_values[i];
			money %= coins_values[i];
		}
	}

	printf("%d\n", minimum_coins);

	exit(EXIT_SUCCESS);
}
