#include "main.h"

/**
 * reset_to_98 - resets the value of a variablr back to 98
 * @n: varieble to be reset
 * Return: void
 */

void reset_to_98(int *n)
{
	int n;

	*n = 402
	_putchar("*n=%d\n", n);
	reset_to_98(&*n);
	_putchar("*n=%d\n", n);
	return (0);
}
