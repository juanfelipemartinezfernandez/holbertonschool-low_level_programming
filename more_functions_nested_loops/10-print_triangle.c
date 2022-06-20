#include "main.h"

void print_triangle(int size)
{

int i, j = 0, k;

for (i = 0; i < size; i++)
{
        for (j = i; j < (size - 1); j++)
        {
                _putchar(' ');
        }
        for ( k = (size - 1); k < size; k++)
        {
                _putchar('#');
        }
        _putchar('\n');
}


}