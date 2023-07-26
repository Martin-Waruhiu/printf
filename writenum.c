#include "main.h"


/**
 * write_number - output strr
 * @precision: prezzision specs
 * @is_negative:argzz
 * @flags: flagging
 * @buffer: work out print
 * @width: widthzz
 * @ind: charrss
 * @size: Siize speci
 *
 * Return: charcounrt
 */
int write_number(int is_negative, int ind, char buffer[],
	int flags, int width, int precision, int size)
{
	int length = BUFF_SIZE - ind - 1;
	char w = ' ', e = 0;


	UNUSED(size);


	if ((flags & F_ZERO) && !(flags & F_MINUS))
		w = '0';
	if (is_negative)
		e = '-';
	else if (flags & F_PLUS)
		e = '+';
	else if (flags & F_SPACE)
		e = ' ';


	return (write_num(ind, buffer, flags, width, precision,
		length, w, e));
}
