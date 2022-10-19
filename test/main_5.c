#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include "../main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *s;
	int i;
	int len, len2;

	s = malloc(1020);
	i = 0;
	while (i &lt; 1019)
	{
		s[i] = 'A';
		i++;
	}
	s[i] = 0;
	len = _printf("%s%b\n", s, INT_MAX);
	len2 = printf("%s%s\n", s, "1111111111111111111111111111111");
	fflush(stdout);
	free(s);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}
