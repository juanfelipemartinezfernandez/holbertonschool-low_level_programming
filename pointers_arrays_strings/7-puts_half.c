#include "main.h"
/**
 * puts_half -  prints half of a string, followed by a new line. 
 * @str: String to print the second half
 */
void puts_half(char *str)
{
int i = 0, len = 0;

while (str[i++])
{
len++;
}
if ((len % 2) != 0)
{
        len-=1;
}

for (i = (len / 2); i <= len - 1; i++)
{
_putchar(str[i]);

}
_putchar('\n');

}