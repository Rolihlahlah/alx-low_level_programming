#include "main.h"

unsigned int _strlen(const char *str);

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a string of 0 and 1 chars
 *
 * Return: the converted number. Otherwise 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len, x, no;

	if (b == NULL)
		return (0);

	len = _strlen(b);

	for (x = 0, no = 0; x < len; x++)
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);

		no += (b[x] - '0') * (1 << (len - x - 1));
	}

	return (no);
}

/**
 * _strlen - finds the lengthof a given string
 * @str: string
 *
 * Return: the length of strings
 */
unsigned int _strlen(const char *str)
{
	unsigned int len = 0;

	while (*str)
	{
		len++;
		str++;
	}

	return (len);
}
