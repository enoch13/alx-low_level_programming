#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
* print_name - Prints a name from a function pointer
* @name: char string
* @f: function pointer for argument
*/
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}
