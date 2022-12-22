#include "main.h"
/**
 * rot13 - encodes a string
 * @str: string
 * Return: returns the encoded string
 */
char *rot13(char *str)
{
int i;
int j;
char basicalpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot13key[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < 52; j++)
{
if (str[i] == basicalpha[j])
{
str[i] = rot13key[j];
break;
}
}
}
return (str);
}
