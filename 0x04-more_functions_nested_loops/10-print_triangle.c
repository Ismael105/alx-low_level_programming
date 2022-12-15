#include "main.h"
/**
 * print_triangle - make a triangle using hash
 * @size: the size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
int i, h;
if (size > 0)
{
for (h = 1; i <= size; h++)
{
for (i = size - h; i > 0; i--)
{
_putchar(' ');
}
for (i = 0; i < h; i++)
{
_putchar('#');
}
if (h == size)
{
continue;
}
_putchar('\n');
}
}
_putchar("\n");
}
