#include "main.h"
#include <stdlib.h>
/**
* _strdup - Duplicate a string using malloc
* @str: string to duplicate
* Return: Pointer to a the new duplicated string
*/
char *_strdup(char *str)
{
char *dplc;
unsigned int x = 0;
unsigned int y = 0;
if (str == NULL)
return (NULL);
while (str[x])
x++;
dplc = malloc(sizeof(char) * (x + 1));
if (dplc == NULL)
return (NULL);
while (str[y])
{
dplc[y] = str[y];
y++;
}
dplc[y + 1] = 0;
return (dplc);
}
