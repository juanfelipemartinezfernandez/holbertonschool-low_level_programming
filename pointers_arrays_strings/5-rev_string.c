#include "main.h"
/**
 * rev_string - function that prints a string, in reverse,
 * followed by a new line.
 * @s:
 */

void rev_string(char *s)
{
int i = 0, len = 0;
char tmp;

while (s[i++])
{
len++;
}
for ( i = len - 1; i >= len; i--)
{
        
        s[i] = s[(len - i) - 1];
}
}