#include "main.h"


/**
 * get_precision - find precizion
 * @format: strr argz
 * @list:argz
 * @i: Lists of argzz.
 *
 * Return: Precizicion.
 */
int get_precision(const char *format, int *i, va_list list)
{
	int x = *i + 1;
	int prezision = -1;


	if (format[x] != '.')
	return (prezision);


	prezision = 0;


	for (x += 1; format[x] != '\0'; x++)
	{
		if (is_digit(format[x]))
		{
			prezision *= 10;
			prezision += format[x] - '0';
		}
		else if (format[x] == '*')
		{
			x++;
			prezision = va_arg(list, int);
			break;
		}
		else
			break;
	}


	*i = x - 1;


	return (prezision);
}
