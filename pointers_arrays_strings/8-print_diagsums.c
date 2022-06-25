#include <stdio.h>
/**
 * print_diagsums - return sum of diagnolas of square
 * @a:matrix
 * @size:matrix size
 */
void print_diagsums(int *a, int size)
{
int sum = (a[0]), i, accum = size;
int sum1 = a[size - 1];

for (i = 1; i < size; i++)
{
accum = size * (i);
sum = sum + (a[accum + i]);
}


accum = (size * 2) - 2;

for (i = 1; i < size; i++)
{
  
sum1 = sum1 + (a[accum]);
accum = accum + size - 1;
}
printf("%d, %d\n", sum, sum1);
}