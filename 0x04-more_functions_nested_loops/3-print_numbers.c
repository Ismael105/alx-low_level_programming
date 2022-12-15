#include "main.h"
#include <stdio>
/**
 *print_numbers - prints numbers form zero to nine
 *Return: 0 Always (Success)
 */
void print_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
{
_putchar(i + '0');
}
_puthchar("\n");
return (0);
}
