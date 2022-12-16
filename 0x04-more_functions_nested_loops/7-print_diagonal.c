#include "main.h"
/**
 * print_diagonal - print diagonal line
 * @n: diagonal number
 * Return: void
 */
void print_diagonal(int n)
{
int i;
if (n > 0)
{
for (i = 0; i < n; i++)
{
_putchar('\ ');
}
}
_putchar('\n');
}
