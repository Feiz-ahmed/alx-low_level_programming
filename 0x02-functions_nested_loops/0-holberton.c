#include "main.h"
int main(void)
{
char *c = "_putchar";
int i;
 for(i = 0; i <sizeof (c); i++){
_putchar(c[i]);
}
 _putchar('\n');
return (0);
