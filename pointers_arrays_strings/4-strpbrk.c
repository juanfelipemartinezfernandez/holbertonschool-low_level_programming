/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s:String to look for coincidence
 * @accept:String to compare with
 * Return: address of first byte that accomplish
 */
char *_strpbrk(char *s, char *accept)
{
int i, j;

for (i = 0; s[i]; i++)
{
        for (j = 0; accept[j]; j++)
        {
                if (s[i] == accept[j])
                {
                        return (s);
                        break;
                }
                
        }
        s++;
}
return ('\0');

}