#include "main.h"
/**
 * _strcat - function that concatenates two strings.
 * @dest:destination string
 * @src: source string
 * Return: String concatenated
 */
char *_strcat(char *dest, char *src)
{
int i = 0, len = 0, len2 = 0, i2 = 0;

while (src[i++])
{
len++;
}
i = 0;

while (dest[i++])
{
len2++;
}

for (i = len2; i < (len + len2); i++)
{
dest[i] = src[i2];
i2++;
}
dest[i] = '\0';
return (dest);
}
