#include "main.h"


/**
 * print_unsigned - outputs unsigned inteeger
 * @width: width measure
 * @types: args
 * @buffer: check print
 * @size: sizes
 * @flags: flaging
 * @precision: precizion
 * Return:count chars
 */
int print_unsigned(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	int x = BUFF_SIZE - 2;
	unsigned long int num1 = va_arg(types, unsigned long int);


	num1 = convert_size_unsgnd(num1, size);


	if (num1 == 0)
		buffer[x--] = '0';


	buffer[BUFF_SIZE - 1] = '\0';


	while (num1 > 0)
	{
		buffer[x--] = (num1 % 10) + '0';
		num1 /= 10;
	}


	x++;


	return (write_unsgnd(0, x, buffer, flags, width, precision, size));
}
