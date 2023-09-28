#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to flip to get from one number to another.
 * @n: first number
 * @m: second number
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int charCount = 0;
	unsigned long int exclusive = n ^ m;

	while (exclusive > 0)
	{
		if (exclusive & 1)
			charCount++;
		exclusive >>= 1;
	}
	return (charCount);
}
