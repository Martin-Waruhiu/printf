#include "main.h"
/**
 * _printf - function that produces output according to a format
 *@format: first argument
 *...: unknown variables
 * Return: 0
 */
int _printf(const char *format, ...)
{
	int i;
	int x;
	int count = 0;
	char *str;
	va_list arg_list;
	
	if (format == NULL)
		return -1;
	va_start(arg_list, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[0]);
			count++;
		}
		else
		{
			format++;
		switch (format[i])
		{
			case 'c':
				_putchar( va_arg(arg_list, int));
				count++;
				break;
			case 's':
				str = va_arg(arg_list,  char*);
				if (!str)
					str = "(nil)";
				for (x = 0 ; str[x] != '\0'; x++)
					_putchar(str[x]);
				count++;
				break;
			case '%':
				_putchar('%');
				count++;
				break;
			default:
				break;
		}
		}
	}
	va_end(arg_list);
	return (0);
}
