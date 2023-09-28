#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: string that contain the binary number
 *
 * Return: the converted number, 0 if there is one or more chars in the string b
 * that is not 0 or 1, b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int p = 0;

	if (b == NULL)
		return (0);
	for (; *b != '\0'; ++b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		p = (p << 1) + (*b - '0');
	}
	return (p);
}
