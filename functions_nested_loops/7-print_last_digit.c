#include "main.h"
/**
 * print_last_digit - print the very last digit 
 * 
 * @n: number to be evaluated
 * Return: prints the result
 */
int print_last_digit(int n)
{
    int result;

    result = (n % 10);
    if (result < 0)
    result=(result*-1);
    _putchar(result+'0');
    return (result);

   
}