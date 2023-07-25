#include "main.h"
/**
* get_flags -  active flags
* @format: argument string
* @i: par
* Return: Flags:
*/
int get_flags(const char *format, int *i)
{
	int x;
	int y;
	int flags = 0;
	const char FLAGS_CH[] = {'-', '+', '0', '#', ' ', '\0'};
	const int FLAGS_ARR[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH,
		F_SPACE, 0};

	for (y = *i + 1; format[y] != '\0'; y++)
	{
		for (x = 0; FLAGS_CH[x] != '\0'; x++)
			if (format[y] == FLAGS_CH[x])
			{
				flags |= FLAGS_ARR[x];
				break;
			}
		if (FLAGS_CH[x] == 0)
			break;
	}
	*i = y - 1;
	return (flags);
}
