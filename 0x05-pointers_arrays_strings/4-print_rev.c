#include "main.h"
/**
 * print_rev-print an array of char
 *@s:variable
 */
void print_rev(char *s)
{
char *t = s;

if (s)
{
while (*t)
++t;
while (s < t--)
_putchar(*t);
_putchar('\n');
}
}
