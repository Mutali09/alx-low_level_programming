#include "main.h"
/**
 * _isupper - Checks for uppercase number
 * @x: The number to be checked
 * Return: 1 for upper letter or 0 for any else
 */
int _isupper(int x)
{
	if (x >= 65 && x <= 99)
	{
		return (1);
	}
	return (0);
}
