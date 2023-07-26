#include "main.h"


/**
 * convert_size_unsgnd - size castingg
 * @num: int nunber
 * @size:type of casting
 *
 * Return: num
 */
long int convert_size_unsgnd(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);


	return ((unsigned int)num);
}
