#include "main.h"
/**
 * print_rev - function that prints a string, in reverse,
 * followed by a new line.
 * @s: string to print in reverse
 */
void print_rev(char *s)
{
int a = 1, i = 0, c;
char *p = &s[-1];

while (a == 1)
{
if (*(s + i) != '\0')
i++;
else
a = 0;
}
for (c = i; c <= 0; c--)
{
        _putchar(s[i]);
}
_putchar('\n');
}
