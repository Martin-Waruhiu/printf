#include "main.h"


/**
 * print_hexadecimal - output unsign hexa
 * @types: argz
 * @precision: Precizion
 * @flags: flagz
 * @buffer: checks write
 * @size: Sizeee
 * @width:  widths
 * Return: charcount
 */
int print_hexadecimal(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	return (print_hexa(types, "0123456789abcdef", buffer,
		flags, 'x', width, precision, size));
}
