#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: Number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;

	mask <<= 63;

	while ((n & mask) == 0 && mask)
		mask >>= 1;

	if (!mask)
	{
		_putchar('0');
		return;
	}

	while (mask)
	{
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');

		mask >>= 1;
	}
}

