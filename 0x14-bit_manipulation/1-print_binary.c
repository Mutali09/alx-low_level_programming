#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number.
 * @n: number to print
 */
void print_binary(unsigned long int n)
{
	int q, charCount = 0;
	unsigned long int current;

	for (q = 63; q >= 0; q--)
	{
		current = n >> q;
		if (current & 1)
		{
			_putchar('1');
			charCount++;
		}
		else if (charCount)
			_putchar('0');
	}
	if (!charCount)
		_putchar('0');
}
