#include "main.h"
/**
 * leet - function to encode a string
 * @str: string
 * Return: encoded string
 */
char *leet(char *)
{
int i = 0;
int j;
char leet[8] = {'0', 'L', '?', 'E', 'A', '?', '?', 'T'};
while (str[++i])
{
for (j = 0; j <= 7; j++)
{
if (str[i] == leet[j] || str[i] - 32 == leet[j])
str[i] = j + '0';
}
}
return (str);
}
