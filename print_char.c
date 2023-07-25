#include "main.h"
/**
* print_char -Outputs a character
* @precision: Precision
* @flags: the active flags
* @width: Width
* @types:  arguments list
* @buffer: print buffer array
* @size: Size
* Return: 1
*/
int print_char(va_list types, char buffer[],
		int width, int precision,
		int flags, int size)
{
	char c = va_arg(types, int);

	return (handle_write_char(c, buffer, flags, width, precision, size));
}
