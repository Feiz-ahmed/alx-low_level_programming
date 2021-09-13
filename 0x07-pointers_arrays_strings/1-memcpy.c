#include "main.h"
/**
 *_memcpy - copy a memory area
 *@dest:pointer to the start of the source area
 *@src:the source to be copied from
 *@n:the number of bytes to be copied
 *descrpitipn:this function copies n bytes from memory
 *Return:(dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; ++i, ++src)

dest[i] = *src;
return (dest);
}
