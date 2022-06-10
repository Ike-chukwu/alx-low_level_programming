#include "main.h"

/**
 * more_numbers - prints numbers between 0 to 14
 * 10 times.
 * Return: no return.
 */
void more_numbers(void)
{
	int j, h;

	for (j = 0; j < 10; j++)
	{
		for (h = 0; h < 15; h++)
		{
			if (h >= 10)
			{
				_putchar((h / 10) + 48);
			}
			_putchar((h % 10) + 48);
		}
		_putchar('\n');
	}
}

