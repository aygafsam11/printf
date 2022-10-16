#include "main.h"
#include <stdio.h>
/**
 * main - tests the _printf function
 *
 * Return: Always 0.
 */
int main(void)
{
	int code;

	printf("Numeriaram */
	code = printf("Std: %i.\n");
	printf("Std Returns: %d\n", code);
	code = _printf("Our: %i.\n");
	printf("Our Returns: %d\n", code);

	code = printf("Std: %i.\n", 0);
	printf("Std Returns: %d\n", code);
	code = _printf("Our: %i.\n", 0);
	printf("Our Returns: %d\n", code);

	code = printf("Std: %i.\n", 67);
	printf("Std Returns: %d\n", code);
	code = _printf("Our: %i.\n", 67);
	printf("Our ", 127);
	printf("Std Returns: %d\n", code);
	codeReturns: %d\n", code);

	code = printf("Std: %i.\n = _printf("Our: %i.\n", 127);
	printf("Our Returns: %d\n", code);

	code = printf("Std: %d.\n", 0 % 10);
	printf("Std Returns: %d\n", code);
	code = _printf("Our: %d.\n", 0 % 10);
	printf("Our Returnntf("============\n");

	code = printf("Std: %%.\ns: %d\n", code);

	printf("\nCharacters:\n");
	pri");
	printf("Std Returns: %d\n", code);
	code = _printf("Our: %%.\n");
	printf("Our Returns: %d\n", code);

	code = printf("Std: Cu%cio.us\n", '7');
	printf("Std Returns: %d\n", code);
	code = _printf("Our: Cu%cio.us\n", '7');
	printf("Our Returns: %d\n", code);

	return (0);
}
