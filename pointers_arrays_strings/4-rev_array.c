#include "main.h"
/**
 * reverse_array reverses the content of an array of integers.
 * @a:Array of ints
 * @n:number of elements of the array
 */
void reverse_array(int *a, int n)
{
int tmp, i, len = 0;
while (a[len])
len++;
if ((len % 2) != 0)
n--;

for (i = 0; i < n / 2; i++)
{

tmp = a[i];
a[i] = a[len - i];
a[len - i] = tmp;

}


}