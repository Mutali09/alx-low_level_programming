#include <stdio.h>

/**
 * main - prints all possible combinations of two-digit numbers
 * Return: Always 0 (success)
 */
int main(void)
{
    int n;

    for (n = 48; n <= 56; n++)
    {
        putchar(n);
        if (n == 56)
        {
            continue;
        }
        putchar(',');
        putchar(' ');
    }
    putchar('\n');
    return (0);
}
