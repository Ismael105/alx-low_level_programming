#include "main.h"
/**
 * print_square - prints square
 * @size: size of square
 * Return: 0 Always
*/
void print_square(int size)
{
int i, j, size;
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size; j++)
{
_putchar("#");
}
_putchar('\n');
}
return (0);
}
