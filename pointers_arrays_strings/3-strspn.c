/**
 * _strspn - gets the length of a prefix substring.
 * @s:The string
 * @accept:the string to compare
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
int len = 0, i, bytes = 0;


for (i = 0; accept[len]; i++)
{
if (s[i] == accept[i])
{
bytes++;
}
else if (accept[i + 1] == '\0')
{
return (bytes);
}

break;
}
return (bytes);
}
