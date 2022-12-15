#include "main.h"
/**
 * print_triangle - make a triangle using hash
 * @size: the size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
int i, j;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= size; ++i)
{
for (j = 1; j <= i; ++j)
{
_putchar("# ");
}
_putchar("\n");
}
return (0);
}
