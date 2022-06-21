#include "main.h"
/**
 * print_rev - function that prints a string, in reverse,
 * followed by a new line.
 * @s: string to print in reverse
 */
void print_rev(char *s)
{
int a = 1, i = 0;

while (a == 1)
{
if (*s[-i] != '\0')
{
_putchar(s[-i]);
i++;
}
else
{
_putchar('\n');
a = 0;
}
}


}
