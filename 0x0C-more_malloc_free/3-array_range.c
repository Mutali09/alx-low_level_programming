#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * array_range - prints array of integers
 * @min: minimu range of values
 * @max: maximum range of values
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int r, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);
	for (r = 0; min <= max; r++)
		ptr[r] = min++;
	return (ptr);
}
