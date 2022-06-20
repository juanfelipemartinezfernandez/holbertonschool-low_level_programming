#include "main.h"
#include <stdio.h>
/**
 * _isdigit - will check if parameter given is digit
 * @c: number to compare
 * Return: 1 if digit, 0 if something else
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);

}
