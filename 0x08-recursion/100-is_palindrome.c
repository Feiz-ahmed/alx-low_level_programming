#include "main.h"

/**
 * is_palindrome - check if a string is a palindrome
 * @s: a pointer to the string to check
 *
 * Return: 1 if the string is a palindrome, otherwise 0
 */
int is_palindrome(char *s)
{
  int i = 0;
  int c = 0;
  int n = 0;

  if (i < n / 2)
    {
      if (s[i] == s[n - i - 1])
	c++;
      i++;
      return (*s);
    }
  else
    {
      if (c == i)
	return (1);
      else
	return (0);
    }
}
