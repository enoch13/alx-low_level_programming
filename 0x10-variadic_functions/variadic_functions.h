#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_
#include <stdarg.h>
#include <stdio.h>
/*
* struct check - paramenters to check against
* @chr: character type
* @f: the function to send it to
*/
typedef struct check
{
char *cr;
void (*f)(va_list str);
} check_t;
int _putchar(char chr);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
