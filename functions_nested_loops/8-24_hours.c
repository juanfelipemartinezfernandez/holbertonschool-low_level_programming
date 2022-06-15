#include "main.h"

void jack_bauer(void)
{
    int h,m;

    for ( h= 0; h <=24; h++)
    {
        if(h <= 9)
        _putchar('0');
        _putchar(h+'0');
        _putchar(':');
        for (m = 0; m<=59; m++)
        {
        if(m <= 9)
        _putchar('0');
        _putchar(m+'0'); 
        }

    }

}