#include "main.h"

/**
* print_hexa_upper -  upper hexadecimal notation
* @flags: active flags
* @types: arguments list
* @buffer: Buffer array
* @width: width
* @precision: Precision
* @size: Size
* Return: 1
*/
int print_hexa_upper(va_list types, char buffer[],
		int flags, int width, int precision, int size)
{
	return (print_hexa(types, "0123456789ABCDEF", buffer,
				flags, 'X', width, precision, size));
}
