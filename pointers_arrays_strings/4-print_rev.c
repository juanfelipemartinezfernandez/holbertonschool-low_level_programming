#include "main.h"
/**
 * print_rev - function that prints a string, in reverse,
 * followed by a new line.
 * @s: string to print in reverse
 */
void print_rev(char *s)
{
int a = 1, i = 0, c;

while (a == 1)
{
if (*(s + i) != '\0')
i++;
else
{
a = 0;
_putchar('\n');
}
}
for (c = i; c >= 0; c--)
{
        _putchar(s[c]);
}
_putchar('\n');
}
