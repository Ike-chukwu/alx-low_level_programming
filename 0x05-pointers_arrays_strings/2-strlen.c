#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @str: The string to get the length of.
 * Return: The length of @str.
 */
size_t _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}