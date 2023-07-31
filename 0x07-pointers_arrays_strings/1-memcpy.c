#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @src: where the memory is copied
 * @dest: where memory is stored
 * @n: number of bytes
 *
 * Return: copied memory with chnaged n bytes
 */
char *_memcpy(char *src, char *dest, unsigned int n)
{
	int p = 0;
	int q = n;

	for (; p < q; p++)
	{
		dest[p] = src[p];
		n--;
	}
	return (dest);
}
