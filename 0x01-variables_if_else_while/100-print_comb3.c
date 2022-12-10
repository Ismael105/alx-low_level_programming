#include <stdio.h>

/**

 *main - Entry point

 *Return: Always 0 (Success)

 */

int main(void)
  
{
  int a, b, c;
  for (a = 0; a < 3; a++)
    {
      for (b = 1; b < 4; b++)
	{
	  for (c = 2; c < 5; c++)
	    {
	      if (a != b && b != c && a != c)
		{
		  putchar("%b, %b, %b", a, b, c);
		}}}}
  return (0);
}
