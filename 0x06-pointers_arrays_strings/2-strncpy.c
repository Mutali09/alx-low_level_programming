#include <stdio.h>
#include "main.h"
/*
 * _strncpy - find and copy the length of a string
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
