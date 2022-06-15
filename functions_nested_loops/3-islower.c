#include "main.h"

int _islower(int c)
{
    char comparison;

    for (comparison = 'a'; comparison <= 'z'; comparison++){
        if ( c == comparison )
        return (1);


    }
    return (0);

}