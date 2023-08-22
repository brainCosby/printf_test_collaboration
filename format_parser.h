#ifndef FORMAT_PARSER_H
#define FORMAT_PARSER_H

#include <stdarg.h>

void parse_and_print(const char *format, va_list args, int *char_count);

#endif // FORMAT_PARSER_H
