#include "main.h"
#include <string.h>
/**
 * leet - Write a function that encodes a string into 1337.
 * @s:String to enconde
 * Return: the string encoded
 */
char *leet(char *s)
{
int k[] = {4, 4, 3, 3, 0, 0, 7, 7, 1, 1};
char c[] = "aAeEoOtTlL\0";
int i, len = 0, j;

len = strlen(s);
for (i = 0; i <= len; i++)
{
for (j = 0; j < 10; j++)
{
if (s[i] == c[j])
{
s[i] = k[j] + '0';
}

}

}

return (s);
}
