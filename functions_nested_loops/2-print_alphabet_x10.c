#include "main.h"

void print_alphabet(void)
{
char alp;
int c;

c=0;

while (c<10){


for (alp = 'a'; alp <= 'z'; alp++)
{
_putchar(alp);
}
_putchar('\n');
c++;
}
return;
}