/**
 * _memset - fills memory with a constant byte.
 * @s: address to pointed
 * @b: the constant to be placed in the n fields
 * @n:the amount of fields to be filled
 * Return: Return the address of memory pointed
 */
char *_memset(char *s, char b, unsigned int n)
{
char *p = s;
int i;

for (i = 0; i < n; i++)
{
*p = b;
p++;
}
return (s);
}
