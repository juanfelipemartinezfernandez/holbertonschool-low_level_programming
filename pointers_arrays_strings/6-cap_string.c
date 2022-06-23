#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string
 * Return: string with capitalizes all words
 */
char *cap_string(char *s)
{
char i, *p, j;
char separator[] = {32, 11, 10, ',', ';', '.', '!', '?', 34, 41, 40, 123, 125};
int index = 0, k;
p = s;
while (s[index])
{
for (i = 'a'; i <= 'z'; i++)
{
for (j = 'A'; j <= 'Z'; j++)
{
        for (k = 0; k < 13; k++)
        {
           if (*p == i && *(p-1) == separator[k])
        {
        *p = *p - 32;
        }
        
        
        
        }
}
}
index++;
p++;
}
return (s);
}