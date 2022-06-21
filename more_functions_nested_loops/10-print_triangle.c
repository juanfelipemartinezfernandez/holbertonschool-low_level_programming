#include "main.h"
/**
 * print_triangle - will print a triangle
 * 
 * @size: will define the hight of the triangle
 */
void print_triangle(int size)
{

int i, j = 0, k;

if (size > 0)
{
for (i = 0; i < size; i++)
{
for (j = i; j < (size - 1); j++)
_putchar(' ');
for (k = 0; k < (i + 1); k++)
_putchar('#');
_putchar('\n');
}
}
else
_putchar('\n');
}