#include <stdio.h>

/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */

int main(void)
{
char alp;

for (alp = 'a'; alp <= 'z'; alp++)
{
if (alp != 'q' && alp != 'e')
putchar(alp);
}
putchar('\n');
return (0);
}
