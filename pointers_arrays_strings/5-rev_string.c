#include "main.h"
/**
 * rev_string - function that prints a string, in reverse,
 * followed by a new line.
 * @s:
 */

void rev_string(char *s)
{
int i = 0, len = 0;

while (s[i++])
{
len++;
}
for ( i = 0; i <= len; i++)
{
        s[(((i+1) * -1) - 1)] = s[i];
}
_putchar('\n');
}