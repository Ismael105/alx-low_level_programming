#include "main.h"
/**
 * cap_string - function to capitalize the first
 * character of a string
 * @str: string
 * Return: capital string
 */
char *cap_string(char *str)
{
int i = 0;
while (!(str[++i] >= 'a' && str[i] <= 'z')
{
i++;
if (str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n' || str[i - 1] == ',' || str[i - 1] == '.' || str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' || str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' || str[i - 1] == '}')
str[i - 1] -= 32;
}
return (str);
}
