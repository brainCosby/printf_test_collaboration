#include <stdio.h>
#include <stdarg.h>
#include "format_parser.h"
#include "output_generator.h"

/**
 * parse_and_print - checks the characters from the formated string
 * and print accordingly
 *
 * - if the character is not '\n' or '%' print the character as it is
 *
 * - if the character is '%', check the specifier and extract from
 *   the coresponding value from the argument list
 */
void parse_and_print(const char *format, va_list args, int *char_count)
{
	char ch; /* to hold character if 'c' */
	char *str; /* to hold string if 's' */

	while (*format != '\0') /* check if end of string is reached */
	{
		if (*format != '%') /* check if charcter is not an identifier */
		{
			print_char(*format, char_count);
		}
		else /* check for identifiers %c, %s, %% */
		{
			format++; /* move past % */
			if (*format == 'c') /* when format is %c */
			{
				ch = va_arg(args, int);
				print_char(ch, char_count);
			}
			else if (*format == 's') /* when format is %s */
			{
				str = va_arg(args, char *);
				print_string(str, char_count);
			}
			else if (*format == '%') /* when format is %% */
			{
				print_percent(char_count);
			}
		}
		format++;
	}
}
