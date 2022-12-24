#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
int a = 48, b;
for (b = 48; b <= 50; b++)
{
putchar(a);
putchar(b);
if (b != 50)
{
putchar(44);
putchar(32);
}}}
putchar('\n');
return (0);
}
