#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
char i = 'a';
while (i <= 'z')
{
if ((i != 'e' && i != 'q')&& i <= 'z')
putchar(i);
i++;
}
putchar('\n');
return (0);
}
