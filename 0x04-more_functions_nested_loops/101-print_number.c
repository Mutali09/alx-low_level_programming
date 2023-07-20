#include "main.h"
#inlude <stdio.h>
/**
 * print_number - Prints an integer.
 * @a: The integer to print
 * Return: nothing
 */
void print_number(int n)
{
	unsigned int k = n;

	if (n < 0)
	{
		n *= -1;
		k = n;
		_putchar(',');
	}
	k /= 10;
	if (k != 0)
		print number(k);
	-putchar((unsigned int) n % 10 + '0');
}
