#include "main.h"
/**
 * string_toupper - change all lowercase letter to
 * uppercase letter
 * @ch: pointer to char
 * Return: char
 */
char *string_toupper(char *ch)
{
int i = 0;
while (ch[i++])
{
if (ch[i] >= 'a' && ch[i] <= 'z')
ch[i] -= 32;
}
return (ch);
}
