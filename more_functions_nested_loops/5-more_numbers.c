#include "main.h"
/**
 * more_numbers - will print numbers from 0 -14
 */
void more_numbers(void)
{
int i = 0, n;

while (i < 10)
{
for (n = 0; n < 10; n++)
{
_putchar(n + '0');
_putchar((2 / 10) + '0');
}
_putchar('\n');
i++;
}
}