#include "main.h"
/**
 * _strcpy - Write a function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest:is where the copied string goes
 * @src:is from where we take the string to copy
 * Return: The array copied
 */
char *_strcpy(char *dest, char *src)
{
int index = 0, con_s = 0, con_d = 0, i;

while (src[index])
{
dest[index] = src[index];
index++;     
con_s++;           
}
while (dest[index++])
{
con_d++;  
}
if(con_d > con_s)
{
int hold = con_d + con_s;
con_d = hold - con_d;
for ( i = con_d; i <= con_s; i++)
{
dest[i] = '\0';
}

}

return (dest);
}