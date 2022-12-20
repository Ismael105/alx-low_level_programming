
0;276;0c#include "main.h"
#include <stdio.h>
/**
 * print_array - prints array
 * @a: array
 * @n: number of value
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; t++)
{
printf("%d", a[i]);
if (i != n - 1)
printf(", ");
}
printf("\n");
}
