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
new_string = malloc(sizeof(char) * str_len);
if (new_string == NULL)
return (NULL);
while (str[i] != 0)
{
new_string[i] = str[i];
i++;
}
return (new_string);
}
