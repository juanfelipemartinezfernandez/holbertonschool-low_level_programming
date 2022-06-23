#include "main.h"
/**
 * *string_toupper changes all lowercase letters of a string to uppercase.
 * Return: lowercase letters of a string
 */
char *string_toupper(char *s)
{
char i, *p;
p = s;
while (s)
{
for (i = 'a'; i <= 'z'; i++)
{
        if (*p == i)
        {
               *p = *p - '32';
        }
}
s++;      
p++;        
}
return (s);

}