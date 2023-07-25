#include "main.h"

/**
* print_octal - octal printing
* @flags: active flags
* @width: width
* @types: arguments list
* @buffer: Buffer array
* @precision: Precision
* @size: Size
* Return: 1
*/
int print_octal(va_list types, char buffer[],
		int flags, int width, int precision, int size)
{
	unsigned long int num = va_arg(types, unsigned long int);
	int i = BUFF_SIZE - 2;
	unsigned long int init_num = num;

	UNUSED(width);
	num = convert_size_unsgnd(num, size);
	if (num == 0)
		buffer[i--] = '0';
	buffer[BUFF_SIZE - 1] = '\0';
	while (num > 0)
	{
		buffer[i--] = (num % 8) + '0';
		num /= 8;
	}
	if (flags & F_HASH && init_num != 0)
		buffer[i--] = '0';
	i++;
	return (write_unsgnd(0, i, buffer, flags, width, precision, size));
}
