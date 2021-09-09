#include "main.h"
/**
 *_strcmp - used to compare two strings in an array
 *@s1:string to be declared
 *@s2:string to be compared
 *Return ( 0 if (s1 = s2)
 */
int _strcmp(char *s1, char *s2)
{

for (; *s1 && *s2; ++s1, ++s2)
{
if (*s1 != *s2)
return (*s1 - *s2);
}
if (*s1)
return (1);
if (*s2)
return (-1);

return (0);
}
