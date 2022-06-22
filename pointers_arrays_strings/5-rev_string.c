#include "main.h"
/**
 * rev_string - function that prints a string, in reverse,
 * followed by a new line.
 * @s:
 */

void rev_string(char *s)
{
int a = 1, i = 0, c;

while (a == 1)
{
if (*(s + i) != '\0')
i++;
else
{
a = 0;
}
}
for (c = i-1; c >= 0; c--)
_putchar(s[c]);
_putchar('\n');
}
