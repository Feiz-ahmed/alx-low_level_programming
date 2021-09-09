#include "main.h"
/**
 * _strcat - concatenate two strings
 * @dest: the string to append to
 * @src: the string to append
 *
 * Description: This function appends the string pointed to by src to the
 * string pointed to by dest, overwriting the null byte at the end of dest.
 *
 * Return: a pointer to the destination string dest
char *_strcat(char *dest, char *src)
{
unsigned int i = 0;
unsigned int j = 0;

while (x*(dest + i) != '\0')
i++;
while (*(src + j) != '\0')
{
*(dest + i) = *(src + j);
i++;
j++;
}
return (dest);
}
