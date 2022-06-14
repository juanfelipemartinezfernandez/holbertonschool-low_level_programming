#include <stdio.h>

/**
 * main - Entry point
 * Description: 'Print size of types'
 * Return: Always 0 (Success)
 */

int main(void)
{
  char n1;
  int n2;
  long int n3;
  long long int n4;
  float n5;
  printf("Size of a char: %lu byte(s)\n",(unsigned long)sizeof(n1));
  printf("Size of a int: %lu byte(s)\n",(unsigned long)sizeof(n2));
  printf("Size of a long int: %lu byte(s)\n",(unsigned long)sizeof(n3));
  printf("Size of a long long int: %lu byte(s)\n",(unsigned long)sizeof(n4));
  printf("Size of a float: %lu byte(s)\n",(unsigned long)sizeof(n5));
  return (0);
}
