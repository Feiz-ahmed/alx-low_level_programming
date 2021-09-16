#include "main.h"
/**
 *factorial - used to check the factorial of a number
 *@n: number to be checked
 *Return: n-1
 */
int factorial(int n)
{

if (n < 0)
{
return (-1);
}
else
if (n == 0)
return (1);
else
return (n = n *factorial(n - 1));
}
