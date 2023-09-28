#include "main.h"

/**
 * check_for_devisors - function that checks the devisots of the number
 *
 * @number: the number to check the devisor
 * @devisor: number to check if it's devisor or not
 *
 * Return: 1 if there are no devisors in between (number is prime)
 *		0 if there is atleast one devisor (not prime)
 */

int check_for_devisors(int number, int devisor)
{
	if (number % devisor == 0 || number == 1)
		return (0);

	if (devisor * devisor > number)
		return (1);


	return (check_for_devisors(number, devisor + 1));
}

/**
 * is_prime_number - function that checks the number is prime or not
 *
 * @n: number to be checked
 *
 * Return: 1 if the input integer is a prime number
 *		otherwise return 0
 */

int is_prime_number(int n)
{
	if (n < 0)
		n *= -1;

	return (check_devisors(n, 2));
}
