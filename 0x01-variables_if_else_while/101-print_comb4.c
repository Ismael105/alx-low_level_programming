#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
int a, b, c;
for (a = 0; a < 10; a++)
{
for (b = 1; b < 10; b++)
{
for (c = 2; c < 10; c++)
{
if (a < b && b < c)
{
putchar(a + '0');
putchar(b + '0');
putchar(c + '0');
if (a != 7)
{
putchar(44);
putchar(32);
}}}}}
putchar('\n');
return (0);
}
