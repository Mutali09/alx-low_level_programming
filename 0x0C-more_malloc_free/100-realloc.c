#include "main.h"
#include <stdlib.h>
/**
 * *_reallo - reallocates a memory block using malloc and free
 * ptr: pointer to the memory previously allocated
 * @old_size: bytes allocated for ptr
 * @new_size: bytes for new memory
 * Return: pointer to the memory allocated
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	char *old_ptr;
	unsigned int q;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	ptr1 = malloc(new_size);
	if (!ptr1)
		return (NULL);
	old_ptr = ptr;
	if (new_size < old_size)
	{
		for (q = 0; q < new_size; q++)
			ptr1[q] = old_ptr[q];
	}
	if (new_size > old_size)
	{
		for (q = 0; q < old_size; q++)
			ptr1[q] = old_ptr[q];
	}
	free(ptr);
	return (ptr1);
}
