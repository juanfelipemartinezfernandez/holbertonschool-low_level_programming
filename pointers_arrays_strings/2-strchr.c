/**
 * _strchr - function that locates a character in a string.
 * @s:String to search
 * @c:character to look in the string
 * Return: address of where that char is located
 */
char *_strchr(char *s, char c)
{
int i = 0;

while (s)
{
        if (*s == c)
        {
                return (s);
        }
        s++;
}
return ('\0');

}