#include "main.h"

/**
 * times_table - function that prints the 9 times table, starting with 0
 *
 * Return: Nothing
 */

void times_table(void)
{
	int i, table_of;

	for (table_of = 0; table_of < 10; table_of++)
	{
		for (i = 0; i < 10; i++)
		{
			int result = table_of * i;

			if (result > 10)
				_putchar('0' + (result / 10) % 10);
			_putchar('0' + result % 10);

			if (i != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
