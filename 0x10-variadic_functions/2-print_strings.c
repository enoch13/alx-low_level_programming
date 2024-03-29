#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_strings - prints strings followed by a new line
* @separator: string to be printed between strings
* @n: number of strings passed to function
* Return: nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list str;
char *c;
unsigned int i;
va_start(str, n);
for (i = 0; i < n; i++)
{
c = va_arg(str, char *);
if (c == NULL)
printf("(nil)");
else
printf("%s", c);
if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(str);
}
