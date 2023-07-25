#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int printf_s(va_list argz);
int printf_c(va_list argz);
int printf_percent(void);


typedef struct format
{
	char *specs;
	int (*func)();
}spec_fun;





#endif
