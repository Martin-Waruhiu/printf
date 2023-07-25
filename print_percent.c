/**
* print_percent -outputs %
*  @flags: active flags
*  @precision: Precision
* @types:  arguments list
* @buffer: Buffer array
* @width:  width
* @size: Size
* Return: 1
*/
int print_percent(va_list types, char buffer[],
		int flags, int width, int precision, int size)
{
	UNUSED(types);
	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);

	return (write(1, "%%", 1));
}
