/**
 * _strspn - gets the length of a prefix substring.
 * @s:The string
 * @accept:the string to compare
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
int i, bytes = 0, j;


for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
       if (s[i] == accept[j])
bytes++;

else if (accept[i + 1] == '\0')
{
return (bytes);
}

break;
}


}
return (bytes);
}
