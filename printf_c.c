#include "main.h"
/**
 *printf_c - function to print a character
 *@argz: arguments
 *Return: 1
 */
int printf_c(va_list argz)
{
	char c;

	c = va_arg(argz, int);
	_putchar(c);
	return (1);
}
