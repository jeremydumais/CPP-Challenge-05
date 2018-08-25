#include "..\include\prime.h"

bool prime::isPrime(unsigned int p_number)
{
    bool retVal = true;
    if (p_number <= 1)
        return false;
    for(unsigned int i=2;i<=p_number/2;i++)
    {
        if (p_number % i == 0)
            retVal = false;
    }
    return retVal;
}