#include <stdio.h>

/**
 * main - Prints putchar.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lett [8] = {95, 112, 117, 116, 99, 104, 97, 114};

	for (n = 0; n < 8; n++)
	{
		putchar(lett[n]);
	}
	putchar('\n');
	return (0);
}
