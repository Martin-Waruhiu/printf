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
	int f;
	int length;

	str = va_arg(argz,  char *);
	if (!str)
	{
		str = "(nil)";
		length = strlen(str);
		for (f = 0 ; str[f] != '\0'; f++)
			_putchar(str[f]);
		return (length);
	}
	else
	{
		length = strlen(str);
		for (f = 0 ; str[f] != '\0'; f++)
			_putchar(str[f]);
		return (length);
	}

}
