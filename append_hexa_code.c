#include "main.h"
/**
* append_hexa_code - hexadecimal code
* @buffer: char arrays
* @i:index
* @ascii_code: ASSCI CODE.
* Return:  3
*/
int append_hexa_code(char ascii_code, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";

	if (ascii_code < 0)
		ascii_code *= -1;
	buffer[i++] = '\\';
	buffer[i++] = 'x';
	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];
	return (3);
}
