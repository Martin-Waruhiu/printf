#include "main.h"


/**
 * get_width - find width
 * @format: str in format
 * @list: argss
 * @i: argzz
 *
 * Return: width.
 */
int get_width(const char *format, int *i, va_list list)
{
	int c;
	int wid = 0;


	for (c = *i + 1; format[c] != '\0'; c++)
	{
		if (is_digit(format[c]))
		{
			wid *= 10;
			wid += format[c] - '0';
		}
		else if (format[c] == '*')
		{
			c++;
			wid = va_arg(list, int);
			break;
		}
		else
			break;
	}


	*i = c - 1;


	return (wid);
}
