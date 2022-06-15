#include "main.h"
/**
 *_islower - shows if it is a lower case letter
 *@c:letter to evaluate
 *Return: 1 if lower case 0 if not
 */
int _islower(int c)
{
char comparison;

for (comparison = 'a'; comparison <= 'z'; comparison++)
{
if (c == comparison)
return (1);

}
return (0);
}