#include "main.h"


/**
 * is_printable - print char
 * @c: Charrr
 *
 * Return: 1,  0 errror
 */
int is_printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);

	return (0);
}
