#include "main.h"
#include <stdio.h>

/**
 * main - function that allocates memory
 * @malloc: memory to allocate
 *
 * Return: malloc on success, 98 on error
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);
	if (ptr == NULL)
	{
	 exit (98);
	}
	return ptr;
}
