#include "main.h"
/**
 *print_alphabet_x10 - prints alphabet 10 times
 */
void print_alphabet_x10(void)
{
char alp;
int c;

c = 0;
while (c < 10)
{
for (alp = 'a'; alp <= 'z'; alp++)
{
_putchar(alp);
}
_putchar('\n');
c++;
}
return;
}