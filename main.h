#ifndef MAIN_H
#define MAIN_H


#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

<<<<<<< HEAD
#define BUFF_SIZE 1024
#define UNUSED(x) (void)(x)


#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

#define S_LONG 2
#define S_SHORT 1

/**
* struct format - Struct operations
*
* @fmt: The format.
* @fn: The function associated.
*/
struct format
{
char fmt;
int (*fn)(va_list, char[], int, int, int, int);
};

/**
* typedef struct format spec_fun - Struct operations
*
* @format: The format.
* @spec_fun: The function associated.
*/
typedef struct format spec_fun;

int _printf(const char *format, ...);
int handle_print(const char *fmt, int *i,
va_list list, char buffer[], int flags, int width, int precision, int size);

int print_string(va_list types, char buffer[],
int flags, int width, int precision, int size);
int print_char(va_list types, char buffer[],
int flags, int width, int precision, int size);
int print_percent(va_list types, char buffer[],
int flags, int width, int precision, int size);


int print_binary(va_list types, char buffer[],
int flags, int width, int precision, int size);
int print_int(va_list types, char buffer[],
int flags, int width, int precision, int size);
int print_unsigned(va_list types, char buffer[],
int flags, int width, int precision, int size);
int print_octal(va_list types, char buffer[],
int flags, int width, int precision, int size);
int print_hexadecimal(va_list types, char buffer[],
int flags, int width, int precision, int size);
int print_hexa_upper(va_list types, char buffer[],
int flags, int width, int precision, int size);
int print_hexa(va_list types, char map_to[],
char buffer[], int flags, char flag_ch, int width, int precision, int size);

int print_non_printable(va_list types, char buffer[],
int flags, int width, int precision, int size);

int print_pointer(va_list types, char buffer[],
int flags, int width, int precision, int size);

int get_flags(const char *format, int *i);
int get_width(const char *format, int *i, va_list list);
int get_precision(const char *format, int *i, va_list list);
int get_size(const char *format, int *i);

int print_reverse(va_list types, char buffer[],
int flags, int width, int precision, int size);

int print_rot13string(va_list types, char buffer[],
int flags, int width, int precision, int size);

int write_unsgnd(int is_negative, int ind,
char buffer[],
int flags, int width, int precision, int size);
int handle_write_char(char c, char buffer[],
int flags, int width, int precision, int size);
int write_number(int is_positive, int ind, char buffer[],
int flags, int width, int precision, int size);
int write_num(int ind, char bff[], int flags, int width, int precision,
int length, char padd, char extra_c);
int write_pointer(char buffer[], int ind, int length,
int width, int flags, char padd, char extra_c, int padd_start);
=======

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
>>>>>>> 20ca11f29257ce35b2558780896e0a726e1e10be

long int convert_size_unsgnd(unsigned long int num, int size);
int is_printable(char);
int append_hexa_code(char, char[], int);
int is_digit(char);
long int convert_size_number(long int num, int size);

#endif
