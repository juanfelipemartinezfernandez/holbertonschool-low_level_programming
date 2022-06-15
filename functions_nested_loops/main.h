#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);
void print_alphabet(void);

int main(void)
{

    return (0);
}


int _putchar(char c)
{
	return (write(1, &c, 1));
}

void print_alphabet(void)
{
char alp;

for (alp = 'a'; alp <= 'z'; alp++)
{
    _putchar(alp);
}
_putchar('\n');
return;
}
