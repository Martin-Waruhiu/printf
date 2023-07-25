#include "main.h"
/**
* get_size -  size of argument
* @format: sting arg
* @i: arg list
*
* Return: precision
*/
int get_size(const char *format, int *i)
{
	int a = *i + 1;
	int size = 0;

	if (format[a] == 'l')
		size = S_LONG;
	else if (format[a] == 'h')
		size = S_SHORT;
	if (size == 0)
		*i = a - 1;
	else
		*i = a;
	return (size);
}
