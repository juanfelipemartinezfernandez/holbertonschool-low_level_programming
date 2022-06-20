#include "main.h"
#include <stdio.h>
/**
 * _isupper - Will check if the letter is upper case
 * @c: is the char to check on
 * Return: 1 on Upper, 0 on something else
 */
int _isupper(int c)
{
char ch;

for (ch = 'A'; ch <= 'Z'; ch++)
{
	if (c == ch)
		return (1);
}
return (0);
}