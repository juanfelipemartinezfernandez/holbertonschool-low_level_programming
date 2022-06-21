#include "main.h"
/**
 * _puts - prints a string
 * @str the string to print out
 */
void _puts(char *str)
{
char *string[] = *str;
int a = 1, i = 0;

while (a == 1)
{
if (*(string + i) != '\0')
{
_putchar(string[i]);
}
else
_putchar('\n');
}


}
