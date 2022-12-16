#include "main.h"
/**
 * print_diagonal - print diagonal line
 * @n: diagonal number
 * Return: void
 */
void print_diagonal(int n)
{
if (n > 0)
{
for (int i = 0; i < n; i++)
{
for (int j = 0; j <= i; j++)
{
if (j == i)
{
_putchar('\ ');
}
else
{
_putchar(' ');
}
}
_putchar('\n');
}
}
_putchar('\n');
}
