/**
 * _strchr - function that locates a character in a string.
 * @s:String to search
 * @c:character to look in the string
 * Return: address of where that char is located
 */
char *_strchr(char *s, char c)
{
char *p;
int i;
p =s;


while (s[i++])
{
        if (*p == c)
        {
                return (s);
        }
        p++;
}
return ('\0');

}