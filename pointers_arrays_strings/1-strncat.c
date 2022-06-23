#include "main.h"
/**
 * _strncat - function that concatenates two strings.
 * @dest:destination string
 * @src:source string
 * @n:amount of bytes to be copied
 * Return: the string concatenated
 */
char *_strncat(char *dest, char *src, int n)
{

int d_len = 0, i;

while (dest[d_len])
{
d_len++;
}


for (i = 0 ; i < n && src[i] != '\0' ; i++)
dest[d_len + i] = src[i];
dest[d_len + i] = '\0';

}