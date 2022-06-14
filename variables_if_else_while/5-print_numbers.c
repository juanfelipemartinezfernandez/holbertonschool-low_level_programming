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
            
            printf(n, "\33[2K\r");
        }
        
        putchar('\n');

        return(0);
}