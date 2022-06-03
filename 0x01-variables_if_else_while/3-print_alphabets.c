#include <stdio.h>

/**
 * main - prints the alphabets
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	char alph_u[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	for (i = 0; i < 26; i++)
	{
		putchar(alph_u[i]);
	}
	putchar('\n');
	return (0);
}

