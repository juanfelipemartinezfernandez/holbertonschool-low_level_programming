#include "main.h"

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