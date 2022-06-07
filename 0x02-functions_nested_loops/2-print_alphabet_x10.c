#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int i;
	int c = 1;

	while (c < 11)
	{
		for (i = 97; i < 123; i++)
		{
			_putchar(i);
		}
		
	_putchar('\n');
	c++;
	}	
}
