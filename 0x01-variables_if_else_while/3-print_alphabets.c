#include <stdio.h>

/**
 * main - prints the alphabets
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp_l[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alp_l[i]);
	}
	putchar("\n")
	return (0);
}

