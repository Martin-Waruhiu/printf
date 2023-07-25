#include "main.h"


/**
 * print_non_printable - output non print in ASCII
 * @types: argzz
 * @size: sizee specs
 * @buffer: checks  write
 * @flags:  flaging
 * @precision: Precizion specs
 * @width:  widths
 * @buffer: checks  write
 * Return: char counts
 */
int print_non_printable(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	int ip = 0, off_set = 0;
	char *str = va_arg(types, char *);


	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);


	if (str == NULL)
		return (write(1, "(null)", 6));


	while (str[ip] != '\0')
	{
		if (is_printable(str[ip]))
			buffer[ip + off_set] = str[ip];
		else
			off_set += append_hexa_code(str[ip], buffer, ip + off_set);


		ip++;
	}


	buffer[ip + off_set] = '\0';


	return (write(1, buffer, ip + off_set));
}
