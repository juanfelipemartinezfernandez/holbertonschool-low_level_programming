#include "main.h"
/**
 * puts_half -  prints half of a string, followed by a new line.
 * @str: String to print the second half
 */
void puts_half(char *str)
{
int i = 0, len = 0, n;

while (str[i++])
{
len++;
}
if ((len % 2) != 0)
n = (len + 1) / 2;
else
n = len / 2;
for (i = n; i <= len - 1; i++)
_putchar(str[i]);
_putchar('\n');
}