#include <stdio.h>
/**
 * main - print numbers 0 to 100, not multiple of 3 and 5
 * Return: void
 */
int main(void)
{
int i;
for (i = 0; i <= 100)
{
if (i % 3 == 0 && i % 5 == 0)
printf("FizzBuzz");
else if (i % 3 == 0)
printf("Fizz");
else
{
printf(i);
}
pritf(" ");
}
}
