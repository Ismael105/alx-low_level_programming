#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
long i, n;
n = 612852475143;
for (i = 2; i < n; i++)
{
while (n % 1 == 0)
{
n = n / i;
}
printf("%lu\n", n);
}
return (0);
}
