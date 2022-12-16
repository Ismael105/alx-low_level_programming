#include "main.h"
/**
 *_isdigit - identify the digit is a number or not
 *@c: the number
 *Return: 1 if the digit is a number, 0 if not
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
