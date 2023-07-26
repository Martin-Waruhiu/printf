#include "main.h"
/**
 * write_unsgnd - output an usigned num
 * @ind: buffer start
 * @buffer: charsz
 * @is_negative: Negative numm
 * @precision: Przision specs
 * @width: Widtdth spec
 * @size: size speccs
 * @flags: Flaging
 *
 * Return: num
 */
int write_unsgnd(int is_negative, int ind,
	char buffer[],
	int flags, int width, int precision, int size)
{
	int lenn = BUFF_SIZE - ind - 1, i = 0;
	char q = ' ';

	UNUSED(is_negative);
	UNUSED(size);
	if (precision == 0 && ind == BUFF_SIZE - 2 && buffer[ind] == '0')
		return (0);
	if (precision > 0 && precision < lenn)
		q = ' ';
	while (precision > lenn)
	{
		buffer[--ind] = '0';
		lenn++;
	}
	if ((flags & F_ZERO) && !(flags & F_MINUS))
		q = '0';
	if (width > lenn)
	{
		for (i = 0; i < width - lenn; i++)
			buffer[i] = q;
		buffer[i] = '\0';

		if (flags & F_MINUS)
		{
			return (write(1, &buffer[ind], lenn) + write(1, &buffer[0], i));
		}
		else
		{
			return (write(1, &buffer[0], i) + write(1, &buffer[ind], lenn));
		}
		return (write(1, &buffer[ind], lenn));
	}
}
