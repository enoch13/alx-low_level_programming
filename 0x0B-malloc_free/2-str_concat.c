#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings using malloc
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concatenate string
 */
char *str_concat(char *s1, char *s2)
{
 char *c;
 unsigned int x = 0;
unsigned int y = 0;
unsigned int z;
unsigned int i = 0;
unsigned int j = 0;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[x])
x++;
while (s2[y])
y++;

z = x + y;
c = malloc(sizeof(char) * z + 1);
if (c == NULL)
return (NULL);

while (i < x)
{
c[i] = s1[i];
i++;
}

while (i <= z)
{
c[i] = s2[j];
i++;
j++;
}
return (c);
}
