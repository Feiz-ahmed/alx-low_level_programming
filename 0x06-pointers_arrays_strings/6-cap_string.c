/**
 * cap_string - function that capitalizes all words of a string.
 * @s: Pointer to Char
 * Return: char.
 */

char *cap_string(char *s)
{
char *ws = " \t\n,;.!?\"(){}";
int i;
int j;

for (i = 0, j = 0; s[i]; ++i)
{
if ('a' <= s[i] && s[i] <= 'z')
{
if (i)
{
for (j = 0; ws[j] && ws[j] != s[i - 1]; ++j)
;
}

if (ws[j])
s[i] -= ('a' - 'A');
}
}

return (s);
}
