#include "main.h"
#include <string.h>
/**
 *printf_s - a function that prints a string
 *@argz: arguments
 * Return: length
 */
int printf_s(va_list argz)
{
	char *str;
	int x;
	int length;

	str = va_arg(argz,  char*);
	if (!str)
	{
		str = "(nil)";
		length = strlen(str);
		for (x = 0 ; str[x] != '\0'; x++)
			_putchar(str[x]);
		return (length);
	}
	else
	{
		length = strlen(str);
		for (x = 0 ; str[x] != '\0'; x++)
			_putchar(str[x]);
		return (length);
	}

}
