#include "function_pointers.h"
/**
* print_name - Prints a name from a function pointer
* @name: The name to be printed
* @f: function pointer that takes a string argument
*/
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}
