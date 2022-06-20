#include "main.h"
/**
 * print_square -function that prints a square, followed by a new line.
 * @size: how big the swaure will be
 */
void print_square(int size)
{
if (size > 0)
{

for (int i = 0; i < size; i++)
{
for (int j = 0; j < size; j++)
{
_putchar('#');
}

}
}
_putchar('\n');
}