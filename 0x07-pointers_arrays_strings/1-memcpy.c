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
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
