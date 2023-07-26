#include "main.h"


/**
 * print_rot13string - output cipher rot13
 * @size: siize specs
 * @buffer: checks print
 * @width: widths
 * @flags: flagging
 * @types: argzz
 * @precision: Preczion specs
 * Return:char counter
 */
int print_rot13string(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	char t;
	char *str;
	unsigned int i, j;
	int countz = 0;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char d[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";


	str = va_arg(types, char *);
	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);


	if (str == NULL)
		str = "(AHYY)";
	for (i = 0; str[i]; i++)
	{
		for (j = 0; a[j]; j++)
		{
			if (a[j] == str[i])
			{
				t = d[j];
				write(1, &t, 1);
				countz++;
				break;
			}
		}
		if (!a[j])
		{
			t = str[i];
			write(1, &t, 1);
			countz++;

		}
	return (countz);
}
}
