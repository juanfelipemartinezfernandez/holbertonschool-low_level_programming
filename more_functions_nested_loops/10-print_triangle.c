#include "main.h"

void print_triangle(int size)
{

int i, j = 0, k = (size - 1);
if (size > 0)
{

for (i = 0; i < size; i++)
{
        for (j = i; j < (size - 1); j++)
        {
                _putchar(' ');
        }
        
        while (k >= 0 && k < (size))
        {
                _putchar('#');
                k--;
        }
        
        
        _putchar('\n');
}

}
else
_putchar('\n');
}