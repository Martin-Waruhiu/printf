#include "main.h"
/**
 * _printf - function that produces output according to a format
 *@format: first argument
 *...: unknown variables
 * Return: 0
 */
int _printf(const char *format, ...)
{
	spec_fun s[] = {
		{"%s", printf_s},
		 {"%", printf_c},
		 {"%%", printf_percent}
	};

	int i= 0;
	int x;
	int length = 0;
	va_list args;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
Here:
	while (format[i] != '\0')
	{
		x = 2;
		while (x >= 0)
		{
			if (s[x].specs[0] == format[i] && s[x].specs[1] == format[i + 1])
			{
				length += s[x].func(args);
				i = i + 2;
				goto Here;
			}
			x--;
		}
		_putchar(format[i]);
		length++;
		i++;
	}
	va_end(args);
	return (length);
}
