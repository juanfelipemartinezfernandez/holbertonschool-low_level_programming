#include <stdio.h>
/**
 * print_diagsums - return sum of diagnolas of square
 * @a:matrix
 * @size:matrix size
 */
void print_diagsums(int *a, int size)
{
int *p;
p = a;
int sum, i;

for (i = 0; i < size; i++)
{
       
sum = (a[i]) + (a[i + size]);
        
        
}
printf("%d ", sum);
}