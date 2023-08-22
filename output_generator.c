#include "output_generator.h"
#include "printers.h"

void print_char(char c, int *char_count)
{
	_putchar(c);
	(*char_count)++;
}

void print_string(const char *str, int *char_count)
{
	_puts(str);
	(*char_count) += _strlen(str);
}

void print_percent(int *char_count)
{
	_putchar('%');
	(*char_count)++;

}
