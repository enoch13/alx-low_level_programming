#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* chk_char - prints the char character
* @str: the type
* Return: nothing
*/
void chk_char(va_list str)
{
printf("%c", va_arg(str, int));
}
/**
* chk_int - prints the int
* @str: the type
* Return: nothing
*/
void chk_int(va_list str)
{
printf("%i", va_arg(str, int));
}
/**
* chk_float - prints the float
* @str: the type
* Return: nothing
*/
void chk_float(va_list str)
{
printf("%f", va_arg(str, double));
}
/**
* chk_string - prints the string
* @c: the type
* Return: nothing
*/
void chk_string(va_list str)
{
char *c;
c = va_arg(str, char *);
if (c == NULL)
c = "(nil)";
printf("%s", c);
}
/**
* print_all - prints anything
* @format: list of types of arguments passed to function
* Return: nothing
*/
void print_all(const char * const format, ...)
{
check_t types[] = {
{"c", chk_char},
{"i", chk_int},
{"f", chk_float},
{"s", chk_string},
{NULL, NULL}
};
int i = 0, j = 0;
va_list str;
char *separator = "";
va_start(str, format);
while (format && format[i])
{
while (types[j].chk)
{
if (format[i] == *types[j].chk)
{
printf("%s", separator);
types[j].f(str);
separator = ", ";
}
j++;
}
j = 0;
i++;
}
printf("\n");
va_end(str);
}
