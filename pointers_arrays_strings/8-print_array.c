#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers, followed by a new line. 
 * @a:Array with elements to print
 * @n:amount of elements to print from that array
 */
void print_array(int *a, int n)
{
int i;

for ( i = 0; i <= n ; i++)
{

if (i == n)
printf("%s", *(a + i));
else
printf("%s, ", *(a + i));
}
printf('\n');

}