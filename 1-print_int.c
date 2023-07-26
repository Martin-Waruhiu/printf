#include "main.h"


/**
 * print_int - output int
 * @size: sizee
 * @buffer: takes care of buffer
 * @flags:  Checks flags
 * @width: width
 * @types: args
 * @precision: Precizion
 * Return:character counter
 */
int print_int(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	unsigned long int num;
	int is_negative = 0;
	long int x = va_arg(types, long int);
	int i = BUFF_SIZE - 2;


	x = convert_size_number(x, size);


	if (x == 0)
		buffer[i--] = '0';


	buffer[BUFF_SIZE - 1] = '\0';
	num = (unsigned long int)x;


	if (x < 0)
	{
		num = (unsigned long int)((-1) * x);
		is_negative = 1;
	}
	while (num > 0)
	{
		buffer[i--] = (num % 10) + '0';
		num /= 10;
	}


	i++;


	return (write_number(is_negative, i, buffer, flags, width, precision, size));
}
