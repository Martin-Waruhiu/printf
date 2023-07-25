#include "main.h"

/**
 * _print_int  - prints integers
 * @format: - string passe
 * Return: lenth
 */


int _print_int(const char *format, ...)
{

	va_list ptrr;
	int char_counter = 0;

	va_start(ptrr, format);

	if (format == NULL)
	{
		return (-1);
	}
	else
	{

	if (*format != '%')
	{
		write(1, format, 1);
		char_counter++;
	}
	else
	{
		format++;
		while (*format != '\0')
		{
		if (*format == 'd' || *format == 'i')
			{
			int d = va_arg(ptrr, int);
			char integers_buffer[12];
			int num1_characters = sprintf(integers_buffer, "%d", d);

			write(1, integers_buffer, num1_characters);
			char_counter += num1_characters;
		}
		format++;
		}
	}

	}
	va_end(ptrr);
	return (char_counter);
}
