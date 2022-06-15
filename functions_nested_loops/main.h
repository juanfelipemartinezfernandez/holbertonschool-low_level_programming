#include <stdio.h>

void print_alphabet(void);

void print_alphabet(void)
{
char alp;

for (alp = 'a'; alp <= 'z'; alp++)
{
    putchar(alp);
}
putchar('\n');
return;
}