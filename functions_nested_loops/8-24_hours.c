#include "main.h"

void jack_bauer(void)
{
    char h,m;

    for ( h= '0'; h <='24'; h++)
    {
        if(h <= 9)
        _putchar('0');
        _putchar(h);
        _putchar(':');
        for (m = '0'; m<='59'; m++)
        {
        if(m <= 9)
        _putchar('0');
        _putchar(m); 
        }

    }

}