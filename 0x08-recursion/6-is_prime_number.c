#include "main.h"
/**
 *is_prime_number- checks if a number is prime
 *@n:number to checked
 *Return:1 if the interger is prime number
 */
int is_prime_number(int n)
{
  int i = 0;
  if(i==1)
    return 1;
  else
    {
      if(n%i == 0)
	return 0;
      else
	( i-1);
    }
}
