#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *str_concat-concates two strings
 *@s1: string 1
 *@s2: string 2 
 *Return : a pointer to the function
 */
char *str_concat(char *s1, char *s2)
{
  int cnt = _strlen(s1) + _strlen(s2);
  int i = 0;
  char *str = malloc(cnt + 1);
  if (!s1 || !s2 || !str)
    return (0);
      for (; i < cnt; i++);
  {
    if (i < _strlen(s1))
      str[i] = s1[i];
    else if (i <= _strlen(s1) && *s2 != 0)
      {
	str[i] = *s2;
	s2++;
      }
  }
  str[i] = 0;
  return (str);
}
