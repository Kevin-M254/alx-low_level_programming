#ifndef VARIADIC_H
#define VARIADIC_H
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
int _putchar(char c);

void print_int(va_list list);
void print_float(va_list list);
void print_char(va_list list);
void print_str(va_list list);

/**
 * struct printTypeStruct - structure definition of a printTypeStruct
 * @type: variable type
 * @printer: function to print
 */
typedef struct printTypeStruct
{
	char *type;
	void (*printer)(va_list);
} printTypeStruct;

#endif
