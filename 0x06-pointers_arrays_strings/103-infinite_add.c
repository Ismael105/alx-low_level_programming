#include <stdio.h>
#include "main.h"
/**
 * infinite_add - add two numbers
 * @n1: first input
 * @n2: second input
 * @r: buffer
 * @size_r: buffor size
 * Return: void
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int overflow = 0, i = 0, j = 0, digits = 0;
int v1 = 0, int v2 = 0, temp_tot = 0;
while (*(n1 + i) != '\0')
i++;
while (*(n2 + j) != '\0')
j++;
i--;
j--;
if (j >= size_r ||  i >= size_r)
return (0);
while (j >= 0 || i >= 0 || overflow == 1)
{
if (i < 0)
v1 = 0;
else
v1 = *(n1 + i)-'0';
if (j < 0)
v2 = 0;
else
v2 = *(n2 + j)-'0';
temp = v1 + v2 + overflow;
if (temp >= 10)
overflow = 1;
else
overflow = 0;
if (digits >= (size_r - 1))
return (0);
*(r + digits) = (temp - tot % 10) + '0';
digits++;
j--;
i--;
}
if (digits == size_r)
return (0);
*(r + digits) = '\0';
rev_string(r);
return (r);
}
