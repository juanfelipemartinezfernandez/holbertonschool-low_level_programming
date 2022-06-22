#include "main.h"
/**
 * _strcat function that concatenates two strings.
 * @dest:destination string
 * @src: source string
 * Return: String concatenated
 */
char *_strcat(char *dest, char *src)
{
int i, len = 0;

while (src[i++])
{
len++;
}

for ( i = 0; i < len; i++)
{
        dest[i] = src[i];
}
dest[i] = '\0';

}
