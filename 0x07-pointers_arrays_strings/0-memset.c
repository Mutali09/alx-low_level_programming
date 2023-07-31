#include "main.h"
/**
 * _memset - fils memory with a constant value
 * @s: Starting address of memory to fill
 * @b: constant value
 * @n: number of bytes changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
