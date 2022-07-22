#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 for sucess result, 1 if there is an ERROR
 */

int main(int argc, char *argv[])
{
int a, b, product;
if (argc != 3)
{
printf("Error\n");
return (1);
}

a = atoi(argv[1]);
b = atoi(argv[2]);
product = a * b;

	printf("%i\n", product);

	return (0);
}
