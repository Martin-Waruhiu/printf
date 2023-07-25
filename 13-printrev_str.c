#include "main.h"

/**
 * printf_revstring - writes in reverse string
 * @argz: - known arguments
 * Return: counter of length
 */

int printf_revstring(va_list argz)
{
	char *strr = va_arg(argz, char*);

	int it;

	int counterr = 0;

	if (strr == NULL)
		strr = "(null)";

	while (strr[counterr] != '\0')
		counterr++;

	for (it = counterr - 1; it >= 0; it--)
	{
		_putchar(strr[it]);
	}
		return (counterr);
}
