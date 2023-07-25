#include "main.h"

/**
* print_pointer - outputs pointer value
*  @flags: active flags
* @types:arguments list
*@precision: Precision
* @width: width
* @buffer: Buffer array
* @precision: Precision
* @size: Size
* Return: 1
*/
int print_pointer(va_list types, char buffer[],
		int flags, int width, int precision, int size)
{

	int n = BUFF_SIZE - 2, len = 2, pad_st = 1;
	unsigned long num_addrs;
	char extra_c = 0, padd = ' ';
	char map_to[] = "0123456789abcdef";
	void *addrs = va_arg(types, void *);

	UNUSED(width);
	UNUSED(size);

	if (addrs == NULL)
		return (write(1, "(nil)", 5));
	buffer[BUFF_SIZE - 1] = '\0';
	UNUSED(precision);
	num_addrs = (unsigned long)addrs;
	while (num_addrs > 0)
	{
		buffer[n--] = map_to[num_addrs % 16];
		num_addrs /= 16;
		len++;
	}
	if ((flags & F_ZERO) && !(flags & F_MINUS))
		padd = '0';
	if (flags & F_PLUS)
		extra_c = '+', len++;
	else if (flags & F_SPACE)
		extra_c = ' ', len++;
	n++;
	return (write_pointer(buffer, n, len,
				width, flags, padd, extra_c, padd_st));
}
