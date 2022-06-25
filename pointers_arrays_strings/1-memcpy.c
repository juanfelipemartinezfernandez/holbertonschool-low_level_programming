/**
 * _memcpy -  function that copies memory area.
 * @dest:destination var
 * @src:source var
 * @n:n bytes from memory area
 * Return: destination var with new copied values
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *p, *p1;
unsigned int i;
p = dest;
p1 = src;

for (i = 0; i < n; i++)
{
*p = *p1;
p++;
p1++;
}
return (dest);
}
