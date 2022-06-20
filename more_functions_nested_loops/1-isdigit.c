#include "main.h"
#include <stdio.h>
/**
 * _isdigit - will check if parameter given is digit
 * @c: number to compare
 * Return: 1 if digit, 0 if something else
 */
int _isdigit(int c)
{
        char n;

        for (n = '0'; n < '10'; n++)
        {
                if (c == n)
                {
                        return (1);
                }

        }
        return (0);

}
