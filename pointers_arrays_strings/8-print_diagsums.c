#include <stdio.h>
/**
 * print_diagsums - return sum of diagnolas of square
 * @a:matrix
 * @size:matrix size
 */
void print_diagsums(int *a, int size)
{
int sum = (a[0]), i, accum = 0;

for (i = 0; i < size; i++)
{
       
sum = sum + (a[accum + i]);
accum = size * (i + 1);   

        
}
printf("%d ", sum);
}