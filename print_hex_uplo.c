#include "main.h"



/**
 * print_hexa - outputs hexa up and low
 * @precision: prec spec
 * @types: argz
 * @buffer: hols write
 * @map_to: array bid
 * @flags:  flagging
 * @width: widthss
 * @size: Sizes
 * @size: Size specss
 * @flag_ch: activee flags
 * Return: charcount
 */
int print_hexa(va_list types, char map_to[], char buffer[],
	int flags, char flag_ch, int width, int precision, int size)
{
	int ik = BUFF_SIZE - 2;
	unsigned long int num2 = va_arg(types, unsigned long int);
	unsigned long int ini_num = num2;


	UNUSED(width);


	num2 = convert_size_unsgnd(num2, size);


	if (num2 == 0)
		buffer[ik--] = '0';


	buffer[BUFF_SIZE - 1] = '\0';

	while (num2 > 0)
	{
		buffer[ik--] = map_to[num2 % 16];
		num2 /= 16;
	}


	if (flags & F_HASH && ini_num != 0)
	{
		buffer[ik--] = flag_ch;
		buffer[ik--] = '0';
	}


	ik++;


	return (write_unsgnd(0, ik, buffer, flags, width, precision, size));
}
