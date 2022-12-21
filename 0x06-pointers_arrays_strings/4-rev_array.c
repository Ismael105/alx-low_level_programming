#include "main.h"
/**
 * reverse_array - reverse a int array                                                                                                  * @a: pointer
 * @n: array length                                                                                                                     * Return: void                                                                                                                         */
void reverse_array(int *a, int n)                                                                                                      {
int i = 0;
int j;
for (j = n / 2; j > 0; j--, i++)
{
a[n - i - 1] += a[i];
a[i] = a[n - i - 1] - a[i];
a[n - i - 1] = a[n - i - 1] - a[i];
}
