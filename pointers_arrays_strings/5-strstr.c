/**
 * _strstr - Write a function that locates a substring.
 * @haystack:String where you are going to locate substring
 * @needle:substring
 * Return: the address of where substring locates
 */
char *_strstr(char *haystack, char *needle)
{
int i, lenh = 0, match, lenn, j;
char *p = haystack;
while (haystack[lenh])
lenh++;
while (needle[lenn])
lenn++;

for (i = 0; i < lenh; i++)
{
        if (haystack[i] == needle[i])
        {
                /*for (j = 0; j < (lenn - 1); j++)
                {
                        if (haystack[i + j] == needle[i + j])
                                match = 1;
                        else
                                match = 0;
                        
                }
                if (match == 1)
                {
                        return (p);
                }*/
                
        }
        p++;
}
return ('\0');
}