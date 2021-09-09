#include "main.h"
/**
 *_strncat- used to concate two strings at n size
 *@dest: is the string to be appended
 *@src: is the string to append
 * Return:char
 *@n:number of bytes
 */
char *_strncat(char *dest, char *src, int n)
{
unsigned int i = 0;
int j = 0;
while (*(dest + i) != '\0')
i++;
while (*(src + j) != '\0')
{
if (j < n)
{
*(dest + i) = *(src + j);
i++;
}
j++;
}
return (dest);
}
