#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - function that returns duplicates of another str
 * @str: original str
 * Return:return pointer to the duplicated str
  */
char *_strdup(char *str)
{
int i = 0;
char *new_string;
int str_len = 0;
while (str[str_len] != 0)
str_len++;
new_string = malloc(sizeof(char) * str_len + 1);
if (new_string == NULL)
return (NULL);
while (str)
{
new_string[i] = *str;
i++;
str++;
}
return (new_string);
}
