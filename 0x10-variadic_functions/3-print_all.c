#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
	int r = 0;
	char *str, *sep = "";
	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[r])
		{
			switch (format[r])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case 'r':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					r++;
					continue;
			}
			sep = ", ";
			r++;
		}
	}
	printf("\n");
	va_end(list);
}
