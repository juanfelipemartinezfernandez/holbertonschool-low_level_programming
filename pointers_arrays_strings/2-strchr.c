/**
 * _strchr - function that locates a character in a string.
 * @s:String to search
 * @c:character to look in the string
 * Return: address of where that char is located
 */
char *_strchr(char *s, char c)
{
int j = 0;
int i = 0;
while (s[j])
{
j++;
}

for (i = 0; i <= j; i++)
{
if (*(s + i) == c)
{
return (s + i);
}

}
return ('\0');
}
