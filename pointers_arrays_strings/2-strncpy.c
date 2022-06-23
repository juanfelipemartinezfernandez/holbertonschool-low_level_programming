#include "main.h"
/**
 * _strncpy function that copies a string.
 * @dest:destination string
 * @src:source string
 * @n: number of bytes to be copies
 * Return: the copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0, len = 0;

while (src[len])
len++;
for ( i = 0; i < n; i++)
dest[i] = src[i];
for (; i < n; i++)
dest[i] = '\0';
return (dest);
}