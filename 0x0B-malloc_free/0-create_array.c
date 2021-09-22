#include <stdlib.h>
#include "main.h"
#include <stddef.h>
/**
 * create_array - is a function to create array
 * @size: counts the array
 * @c: arrays to be created
 * Return: success
 */
char *create_array(unsigned int size, char c)
{
unsigned int i = 0;
char *p = 0;
if (size <= 0)
return (NULL);
p = malloc(sizeof(int) * size));
if (p != NULL)
for (i = 0; i < size; i++)
*(p + i) = c;

return (p);

}
