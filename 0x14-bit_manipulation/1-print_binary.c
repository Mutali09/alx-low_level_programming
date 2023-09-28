#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number.
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << 63;
	int charCount = 0;

	while (mask > 0)
	{
		if (n & mask)
		{
			_putchar('1');
			charCount++;
		}
		else if (charCount > 0)
		{
			_putchar('0');
		}
		mask >>= 1;
	}
	if (!charCount)
		_putchar('0');
}
