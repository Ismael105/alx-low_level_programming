#include <stdlib.h>

#include <time.h>

/* more headers goes there */



/* betty style doc for function main goes there */

int main(void)
  
{
  
  int n;
  

  
  srand(time(0));
  
  n = rand() - RAND_MAX / 2;
  int s=n%10
    if (s>5)
      {
       printf("Last digit of "+ n +" is "+ s +" and is greater than 5");
	
            }
    else if (s==0)
	 {
	  printf("Last digit of "+ n +" is "+ s +" and is 5");
	 }
    else
	 {
	  printf("Last digit of "+ n +" is "+ s + " and is less than 6 and not 0");
  /* your code goes there */
  
  return (0);
  
}
