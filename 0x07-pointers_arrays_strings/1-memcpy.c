#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @src: memory where is copied
 * @dest: memory where is stored
 * @n: number of bytes
 *
 * Return: copied memory with n byted changed
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
