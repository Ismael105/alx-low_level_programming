#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
int a = 0;
while (a<10)
{
int b;
for (b = 0; b <= 9; b++)
{
putchar(a + '0');
putchar(b + '0');
putchar(", ");
}
}
putchar('\n');
return (0);
}
