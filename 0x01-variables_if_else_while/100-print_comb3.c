#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
int a, b;
for (a = 0; a <= 8; a++)
{
b = a + 1;
for (; b <= 9; b++)
{
putchar(a + '0');
putchar(b + '0');
if (b != 50)
{
putchar(44);
putchar(32);
}}}
putchar('\n');
return (0);
}
