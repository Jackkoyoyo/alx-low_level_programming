#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 * Return: void
 */

void jack_bauer(void)
{
	int hour, minutes;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minutes = 0; minutes <= 59; minutes++)
		{
			_putchar(48 + hour / 10);
			_putchar(48 + hour % 10);
			_putchar(':');
			_putchar(48 + minutes / 10);
			_putchar(48 + minutes % 10);
			_putchar('\n');
		}
	}
}
