#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string
 * Return: string with capitalizes all words
 * @s:string to capitalize first letter
 */
char *cap_string(char *s)
{
char i, *p;
char separator[] = {32, 9, 10, ',', ';', '.', '!', '?', 34, 41, 40, 123, 125, 0};
int index = 0, k;
p = s;
while (s[index])
{
for (i = 'a'; i <= 'z'; i++)
{
for (k = 0; k < 14; k++)
{
if ((*p == i && *(p - 1) == separator[k]))
{
*p = *p - 32;
}   
}
}
if (s[index] != '\0')
{
index++;
p++;
}


}
return (s);
}