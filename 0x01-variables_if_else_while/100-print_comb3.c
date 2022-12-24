#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
int a = 0, b;
for (b = 1; b <= 3; b++)
{
putchar(a + '0');
putchar(b + '0');
if (b != 50)
{
putchar(44);
putchar(32);
}}
putchar('\n');
return (0);
}
