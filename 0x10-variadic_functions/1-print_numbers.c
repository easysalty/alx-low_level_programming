#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @seperator: seperator to print between nummbers
 * @n: number of numbers to print
 *
 * Return: void
 */
void print_numbers(const char *seperator, cost unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list valist;

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(valist, int);
		printf("%d", num);
		if (i < n - 1 && seperator)
			printf("%s", seperator);
	}
	printf("\n");
	va_end(valist);
}
