#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _memset - fills memory with a byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int p;

	for (p = 0; p < n; p++)
	{
		s[p] = b;
	}
	return (s);
}
/**
 * *_calloc - allocates memory for an array
 * @nmemb: elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocate memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}
