#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: n is the number of times the character space should be printed
 */
void print_diagonal(int n)
{
int i, j;

if (n > 0)
{
for (i = 0; i < n; i++)
{       
j = 0;

while (j < i)
{
_putchar(' ');
j++;
}
_putchar('\\');
if (i == n - 1)
	continue;
_putchar('\n');
}
}
_putchar('\n');

}