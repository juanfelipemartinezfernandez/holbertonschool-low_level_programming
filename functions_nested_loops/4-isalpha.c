#include "main.h"
/**
 * _isalpha - shows if it is a letter either upper or lower case
 * 
 * @c: Number to check
 * Return: Shows 1 if letter 0 if not 
 */
int _isalpha(int c)
{
char comparison;

for (comparison = 'a'; comparison <= 'z'; comparison++){
if ( c == comparison )
return (1);
}
for (comparison = 'A'; comparison <= 'Z'; comparison++){
if ( c == comparison )
return (1);
}
return (0);

}