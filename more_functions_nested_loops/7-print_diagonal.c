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
while (j <= i)
{
_putchar(' ');
}
_putchar('\\');
}
}
_putchar('\n');

}