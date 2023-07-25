#include "main.h"
void print_buffer(char buffer[], int *buff_ind);
/**
* _printf - a function that print specifiers
* @format: format.
* Return: count
*/
int _printf(const char *format, ...)
{
	char buffer[BUFF_SIZE];
	int flags, width, precision, size, buff_ind = 0;
	va_list list;
	int i, printed = 0, chars = 0;

	if (format == NULL)
		return (-1);
	va_start(list, format);
	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			buffer[buff_ind++] = format[i];
			if (buff_ind == BUFF_SIZE)
				print_buffer(buffer, &buff_ind);
			chars++;
		}
		else
		{
			print_buffer(buffer, &buff_ind);
			flags = get_flags(format, &i);
			width = get_width(format, &i, list);
			precision = get_precision(format, &i, list);
			size = get_size(format, &i);
			++i;
			printed = handle_print(format, &i, list,
					buffer, flags, width,
					precision, size);
			if (printed == -1)
				return (-1);
			chars += printed;
		}
	}
	print_buffer(buffer, &buff_ind);
	va_end(list);
	return (chars);
}
/**
* print_buffer - Buffer contents
* @buffer: character arrays
* @buff_ind: lenght index
*/
void print_buffer(char buffer[], int *buff_ind)
{
	if (*buff_ind > 0)
		write(1, &buffer[0], *buff_ind);
	*buff_ind = 0;
}
