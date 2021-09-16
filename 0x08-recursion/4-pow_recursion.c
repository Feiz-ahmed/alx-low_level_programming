#include "main.h"
/**
 *_pow_recursion- function to check power
 *@x:number to be increased
 *@y:power value
 *Return:x,y-1
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else
return (x * _pow_recursion(x, y - 1));
}
