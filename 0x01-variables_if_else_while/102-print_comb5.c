#include <stdio.h>

/**
 * main - prints all possible combinations of two-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i, j;

    for (i = 0; i < 100; i++)
    {
        for (j = 0; j < 100; j++)
        {
            if (i < j)
            {
                printf("%02d ", i);
                printf("%02d", j);
                if (i != 98 || j != 99)
                {
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }
    putchar('\n');
    return (0);
}	
