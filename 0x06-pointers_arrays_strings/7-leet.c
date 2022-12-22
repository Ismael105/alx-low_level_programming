#include "main.h"
#include <stdio.h>
/**
 * leet - function to encode a string
 * @str: string value
 * Return: return encoded string
 */
char *leet(char *str)
{
int i;
int j;
char B[] = "aAeEoOtTlL";
char b[] = "4433007711";
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j <= 7; j++)
{
if (str[i] == B[j])
{
str[i] = b[j];
}
}
}
return (str);
}
