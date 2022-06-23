#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string
 * Return: string with capitalizes all words
 */
char *cap_string(char *s)
{
char i, *p, j;
int index = 0;
p = s;
while (s[index])
{
for (i = 'a'; i <= 'z'; i++)
{
for (j = 'A'; j <= 'Z'; j++)
{
        if (*p == i && *(p-1) != j)
        {
        *p = *p - 32;
        }
}
}
index++;
p++;
}
return (s);
}