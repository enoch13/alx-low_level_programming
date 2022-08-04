#include "variadic_functions.h"
/**
* sum_them_all - returns the sum of all parameters
* @n: the numbers of arguments being passed through
* Return: the sum of all parameters
*/
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
va_list str;
int sum = 0;
va_start(list, n);
for (i = 0; i < n; i++)
sum += va_arg(str, int);
va_end(str);
return (sum);
}
