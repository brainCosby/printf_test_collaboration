#include <stdarg.h>
#include "main.h"
#include "format_parser.h"
#include <stdio.h>


/* _printf - print a formated string (with %s, %c %%)
 * @format - the formated string to print
 * Return: return the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);

	int char_count = 0;

	parse_and_print(format, args, &char_count);
	printf("%d", char_count);

	va_end(args);

	return (char_count);
}
