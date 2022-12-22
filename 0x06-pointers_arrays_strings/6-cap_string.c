#include "main.h"
/**
 * cap_string - function to capitalize first character of a word
 * @str: string to capitalize
 * Return: capital string
 */
char *cap_string(char *str)
{
int i = 0;
while (!(str[i] >= 'a' && str[i] <= 'z'))
{
if (str[i] == ' ' ||
str[i] == '\t' ||
str[i] == '\n' ||
str[i] == ',' ||
str[i] == '.' ||
str[i] == '!' ||
str[i] == '?' ||
str[i] == '"' ||
str[i] == '(' ||
str[i] == ')' ||
str[i] == '{' ||
str[i] == '}' ||
i == 0)
str[i] -= 32;
i++;
}
return (str);
}
