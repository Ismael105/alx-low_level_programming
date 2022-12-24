#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
char a;
for (a = '0'; a <= '9'; a++)
{
char b;
 char c = ", ";
for (b = '0'; b <= '9'; b++)
{
putchar(a);
putchar(b);
putchar(c);
}
}
putchar('\n');
return (0);
}
