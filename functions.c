#include "main.h"

/**
 * print_char - prints a character
 * @types:lists all arguments
 *width
 * precision specifications
 * return: number of characters printed 
 */
int print_char(va_list types, char buffer[], int flags, int width, int precision,int size)
{
	char c - va_arg(types, int);

	return (handle_write_char(c, buffer, flags, width, precision, size)):
}
