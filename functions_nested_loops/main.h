void print_alphabet(void);

void _putchar();
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