#include "main.h"
/**
 * print_chessboard - prints the chessboard.
 * @a:
 */
void print_chessboard(char (*a)[8])
{
int i, j;


for (i = 0; i < a[0]; i++)
{
_putchar(a[i][i]);
        for (j = 0; j < 8; j++)
        {
                _putchar(a[i + 1][j]);
        }
        _putchar('\n');
}

}