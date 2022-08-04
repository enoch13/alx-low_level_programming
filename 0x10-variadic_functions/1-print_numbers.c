#include "variadic_functions.h"
#include <stdio.h>
/**
* print_numbers - prints numbers, followed by a new line
* @separator: string to be printed between numbers
* @n: the number of integers passed to function
* Return: nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list str;
va_start(str, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(str, int));
if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(str);
}
