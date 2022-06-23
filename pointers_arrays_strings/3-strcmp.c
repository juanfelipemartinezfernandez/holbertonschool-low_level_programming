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
int len1 = 0, len2 = 0;

if (*s1 == *s2)
{
s1++;
s2++;
}

return (*s1-*s2);



}