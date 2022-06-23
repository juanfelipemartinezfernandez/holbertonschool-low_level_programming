#include "main.h"
/**
 * *string_toupper changes all lowercase letters of a string to uppercase.
 * Return: lowercase letters of a string
 */
char *string_toupper(char *s)
{
char i, *p;
int index = 0;
p = s;
while (s[index])
{
for (i = 'a'; i <= 'z'; i++)
{
        if (*p == i)
        {
               *p = *p - 32;
        }
}
index++;
p++;        
}
return (s);

}