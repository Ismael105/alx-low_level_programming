#include "main.h"
/**
 * this will return 1 for letters
 */
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
return(1);
}
else if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
return (0);
}
