#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
int a;
for (a = '0'; a <= '9'; a++)
{
int b;
for (b = '0'; b <= '9'; b++)
{
putchar(a + '0');
putchar(b + '0');
putchar(44);
putchar(32);
}
}
return (0);
}
