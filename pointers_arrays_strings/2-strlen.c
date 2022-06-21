#include "main.h"
/**
 * _strlen - function that returns the length of a string.
 * @s: string to analize
 * Return: it returns the lenght of the string
 */
int _strlen(char *s)
{
int contador = 0, a = 1;

while (a == 1)
{
if (*(s + contador) != '\0')
contador++;
else
a == 0;
}
return (contador);
}
