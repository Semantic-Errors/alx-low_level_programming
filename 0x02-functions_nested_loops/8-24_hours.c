#include "main.h"

/**
 * jack_bauer - function that prints every minute of the day of Jack Bauer,
 *							starting from 00:00 to 23:59
 *
 * Return: Nothing
 */

void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar('0' + ((hour / 10) % 10));
			_putchar('0' + (hour % 10));

			_putchar(':');

			_putchar('0' + ((minute / 10) % 10));
			_putchar('0' + (minute % 10));

			_putchar('\n');
		}
	}
}
