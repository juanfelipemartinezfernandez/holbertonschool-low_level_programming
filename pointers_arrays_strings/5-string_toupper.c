#include "main.h"
/**
 * *string_toupper changes all lowercase letters of a string to uppercase.
 * Return: lowercase letters of a string
 */
char *string_toupper(char *s)
{
char i;
while (s)
{
for (i = 'a'; i <= 'z'; i++)
{
        if (*s == i)
        {
               *s = *s - 32;
        }
}
s++;      
        
}
return (s);

}