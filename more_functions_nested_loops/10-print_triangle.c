#include "main.h"

void print_triangle(int size)
{

int i, j = 0, k = (size - 1);
int h = size;

if (size > 0)
{

for (i = 0; i < size; i++)
{
        for (j = i; j < (size - 1); j++)
        {
                _putchar(' ');
        }
        
        while (k < h && k >= 0)
        {
                _putchar('#');
                k++;
        }
        h++;
        
        
        _putchar('\n');
}

}
else
_putchar('\n');
}