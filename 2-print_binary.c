#include "main.h"

/**
* print_binary - Prints Binary
* @types:  argument list
* @flags:  active flags
* @width:  width
* @buffer: Buffer array
* @precision: precision
* @size: size
* Return: 1
*/
int print_binary(va_list types, char buffer[],
		int flags, int width, int precision, int size)
{
	unsigned int x, y, i, sum;
	unsigned int a[32];
	int cont;

	UNUSED(precision);
	UNUSED(size);
	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);

	x = va_arg(types, unsigned int);
	y = 496483648;
	a[0] = x / y;

	for (i = 1; i < 32; i++)
	{
		y /= 2;
		a[i] = (x / y) % 2;
	}
	for (i = 0, sum = 0, cont = 0; i < 32; i++)
	{
		sum += a[i];
		if (sum || i == 31)
		{
			char z = '0' + a[i];

			write(1, &z, 1);
			cont++;
		}
	}
	return (cont);
}
