#include "main.h"
/**
 * print_chessboard - prints the chessboard.
 * @a:
 */
void print_chessboard(char (*a)[8])
{
int i, j, len = 0;

while (a[len])
len++;

for (i = 0; i < len; i++)
{
_putchar(*(a + i));
        for (j = 0; j < 8; j++)
        {
                _putchar(a[i][j]);
        }
        
}

}