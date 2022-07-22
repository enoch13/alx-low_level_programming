#include <stdlib.h>
#include <stdio.h>

/**
* main - adds positive numbers
*
* @argc: argument counter
* @argv: argument vector
* Return: 1 if ERROR such as symbols that are not numbers,
* 0 if nothing is passed
*/

int main(int argc, char *argv[])
{
  int x, y;
  int n = 0;
  
  if (argc < 2)
  {
    printf("0\n");
    return (0);
  }
  
  for (x = 1; x < argc; x++)
  {
    for (y = 0; argv[x][y] != '\0'; y++)
    {
      if (argv[x][y] < '0' || argv[x][y] > '9')
      {
        printf("Error\n");
        return (1);
      }
    }
    n += atoi(argv[x]);
  }
  printf("%d\n", n);
  return (0);
}
