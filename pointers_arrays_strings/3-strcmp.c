#include "main.h"
/**
 * _strcmp - function that compares two strings.
 * @s1: 1st String
 * @s2: 2nd String
 * Return: integer less than, equal to, or greater than zero if  s1  is
 * found, respectively, to be less than, to match, or be greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
char *p,*p2;
p = s1;
p2 = s2;
while (*p == *p2)
{
p++;
p2++;
}

if (*p == *p2 || p == p2)
return (0);
return (*p-*p2);



}