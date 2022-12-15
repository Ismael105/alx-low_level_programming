#include <stdio.h>
/**
 * main - print numbers 0 to 100, not multiple of 3 and 5
 * Return: void
 */
int main(void)
{
int i;
char str1[5];
char str2[5];
char str3[9];
strcpy(str1, "Fizz");
strcpy(str2, "Buzz");
strcpy(str3, "FizzBuzz");
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
puts(str3);
}
else if (i % 3 == 0)
{
puts(str1);
}
else if (i % 5 == 0)
{
puts(str2);
}
else
{
printf("%d ", i);
}
printf(" ");
}
}
