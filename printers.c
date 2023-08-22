#include "printers.h"
#include <unistd.h>

/**
 *_putchar - writes the character c to stdout  @c: the character to print
 *
 * Return: on success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
 * _puts - prints a string followed by a new line
 * @str: a parameter to the function
 */

void _puts(const char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}


/**
 * _strlen - returns the lenght of a string
 * @s: a parameter to the function
 * Return: the length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
