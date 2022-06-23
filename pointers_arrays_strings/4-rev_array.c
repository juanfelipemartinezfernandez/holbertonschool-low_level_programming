#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a:Array of ints
 * @n:number of elements of the array
 */
void reverse_array(int *a, int n)
{
int tmp, i;


for (i = n - 1; i >= n / 2; i--)
{
tmp = a[n - i - 1];
a[n - i - 1] = a[i];
a[i] = tmp;
}

}