#include <stdio.h>
/**
 * main - print numbers 0 to 100, not multiple of 3 and 5
 * Return: void
 */
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz");
}
else if (i % 3 == 0)
{
printf("Fizz");
}
else if (i % 5 == 0)
{
printf("Buzz");
}
else
{
printf(i);
}
pritf(" ");
}
}