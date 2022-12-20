#include "main.h"
#include <stdio.h>
/**
 * print_array - prints array
 * @a: array
 * @n: number of value
 */
void print_array(int *a, int n)
{
int i;
for (t = 0; t < n; t++)
{
printf("%d", a[t]);
if (t != n - 1)
printf(", ");
}
printf("\n");
}
