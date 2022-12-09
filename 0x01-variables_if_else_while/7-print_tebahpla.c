#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
char i = 'z';
while (i >= 'a')
{
putchar('%d', i);
i--;
}
putchar('\n');
return (0);
}
