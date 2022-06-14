#include <stdio.h>

/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;

        for(n=0; n<10; n++)
        {
            if (n != 9){
                putchar(n+'0');
                putchar(',');
            }
            else
            {
                putchar(n+'0');
            }
        }
        
        putchar('\n');

        return(0);

}