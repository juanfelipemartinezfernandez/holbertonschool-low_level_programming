#include <stdio.h>

/**
 * main - Entry point
 * 
 * Description: 'print whether the number stored in the variable n is positive or negative'
 * 
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	if (n>0)
		printf("is positive\n");
	else if (n<0)
		printf("is negative\n");
	else
		printf("is zero\n");
	return(0);
}
