#include <stdio.h>
/**
 *main - Entry point
 *Description: 'prints alphabets in reverse'
 *Rerturn: Always 0 (success)
 */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
