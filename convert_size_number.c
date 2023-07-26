/**
* convert_size_number - convert string size
* @num: numbers
* @size: type
*
* Return: 0
*/
long int convert_size_number(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);
	return ((int)num);
}
