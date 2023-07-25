#include "main.h"
/**
* print_reverse - Outputs a string in reverse
*@precision: precision
* @types: argument list
* @buffer: Buffer array
* @flags: active flags
* @width:  width
* @size: size
* Return: 1
*/
int print_reverse(va_list types, char buffer[],
		int flags, int width, int precision, int size)
{
	int c = 0;
	char *str;
	int i;

	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(size);
	str = va_arg(types, char *);

	if (str == NULL)
	{
		UNUSED(precision);
		str = ")Null(";
	}
	for (i = 0; str[i]; i++)
		for (i = i - 1; i >= 0; i--)
		{
			char z = str[i];

			write(1, &z, 1);
			c++;
		}
	return (c);
}
