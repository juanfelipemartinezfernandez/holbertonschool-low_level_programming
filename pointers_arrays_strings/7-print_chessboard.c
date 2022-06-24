#include "main.h"
/**
 * print_chessboard - prints the chessboard.
 * @a:
 */
void print_chessboard(char (*a)[8])
{
int i, j, len = 0;
char *p1,*p2;
p1 = a;
while (a[len])
len++;

for (i = 0; i < len; i++)
{
_putchar(*(p1 + i));
        for (j = 0; j < 8; j++)
        {
                _putchar(a[i][j]);
        }
        
}

}