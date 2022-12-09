6-print_numberz.c
#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
int s = 0;
while (s < 10)
putchar(s + "");
putchar('\n');
return (0);
}
