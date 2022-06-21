#include "main.h"
/**
 * swap_int - function that swaps the values of two integers.
 * @a:1 out of the 2 numbers to swap
 * @b:2 out of the 2 numbers to swap
 */
void swap_int(int *a, int *b)
{
int holder;

holder = *a;
*a = *b;
*b = *a;
}