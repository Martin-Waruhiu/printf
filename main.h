#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>


/**
 * struct format - name of struct
 * @specs: - Array of char pointer
 * @func: pointer to function
 */
typedef struct format
{
	char *specs;
	int (*func)();
} spec_fun;

int _printf(const char *format, ...);
int _putchar(char c);
int printf_s(va_list argz);
int printf_c(va_list argz);
int printf_percent(void);


#endif
