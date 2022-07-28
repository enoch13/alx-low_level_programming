#include "main.h"
#include <stdlib.h>
/**
* _calloc - allocates memory for an array given number of elements and size
* @nmemb: number of elements
* @size: size of each element
* Return: Null if error, else pointer to allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *x;
unsigned int i;
if (size == 0 || nmemb == 0)
return (NULL);

x = malloc(size * nmemb);
if (x == NULL)
return (NULL);

for (i = 0; i < (size * nmemb); i++)
x[i] = 0;

return (x);
}
