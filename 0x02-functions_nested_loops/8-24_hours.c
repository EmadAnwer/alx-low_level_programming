#include "main.h"
/*
 * Task 8 in 0x02. C - Functions, nested loops
 * Purpose : prints every minute of the day in 4 digits followed by a new line.
 * my sulotion: using nested while to print evry  minute and hour
 *		using / and % to cut hour and minute to 4 digits
 */

/**
 * jack_bauer - prints every minute of the day
 * Return: void
 *
 */

void jack_bauer(void)
{
	char hours = 0;
	char minute = 0;

	while (hours != 24)
	{
		minute = 0;
		while (minute != 60)
		{
			_putchar('0' + hours / 10);
			_putchar('0' + hours % 10);
			_putchar(':');
			_putchar('0' + minute / 10);
			_putchar('0' + minute % 10);
			_putchar('\n');
			minute++;
		}
	hours++;

	}
}
