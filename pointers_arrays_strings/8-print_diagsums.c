#include <stdio.h>
/**
 * print_diagsums - return sum of diagnolas of square
 * @a:matrix
 * @size:matrix size
 */
void print_diagsums(int *a, int size)
{
int sum = (a[0]), i, accum = size;

for (i = 1; i < size; i++)
{
  accum = size * (i);
sum = sum + (a[accum + i]);
   

        
}
printf("%d ", sum);
}