#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int p;
	int k;

	for (p = 0; p < 8; p++)
	{
		for (k = 0; k < 8; k++)
			_putchar(a[p][k]);
		_putchar('\n');
	}
}
