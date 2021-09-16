#include "main.h"
/**
 *_strlen_recursion - calculate length of a string
 *@s: a pointer to the string to find the length of
 *
 *Return: the length of s
 */
int _strlen_recursion(char *s)
{
int len = 0;
if (*s)
{
len++;
len += _strlen_recursion(s + 1);
}
return (len);
}
