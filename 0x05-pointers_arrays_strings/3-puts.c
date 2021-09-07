#include "main.h"
/**
 * _puts - Reads string pointers
 * @i: counter var
 * @s: string read
 */
void _puts(char *s)
{
int i = 0;

while (s[i])
{
putchar(s[i]);
i++;
}
