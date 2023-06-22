#include "main.h"
/**
 * _isalpha-identifies letters from other characters
 * int c-is any kind of input
 * return() - returns 1 and 0 based on the c value
*/
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
return (0);
}
