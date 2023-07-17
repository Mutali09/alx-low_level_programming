#include <stdio.h>

/**
 * main - prints the size of various types based on computer it runs on
 * Return: Always 0.
 */
int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of a short: %zu byte(s)\n", sizeof(short));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long: %zu byte(s)\n", sizeof(long));
	printf("Size of a long long: %zu byte(s)\n", sizeof(long long));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));
	printf("Size of a double: %zu byte(s)\n", sizeof(double));
	printf("Size of a long double: %zu byte(s)\n", sizeof(long double));
	return (0);
}
