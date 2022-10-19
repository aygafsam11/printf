#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	int len, len2;
	long res = INT_MAX;

	res *= 2;
	len = _printf("%o + %o = %o\n", INT_MAX, INT_MAX, res);
	len2 = printf("%o + %o = %o\n", INT_MAX, INT_MAX, res);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}
