//
// Created by Zia Minhas on 2018-06-03.
//

#ifndef LAB_11_ISPRIME_H
#define LAB_11_ISPRIME_H
#include <tgmath.h>

#endif //LAB_11_ISPRIME_H

#include <iostream>

using namespace std;

//accepts an integer and returns true if it is prime and false if it is not prime.
bool isPrime(int a)
{
    if (a < 2)
        return false;
    else if (a>2)
    {
        if (a % 2 == 0)
            return false;
        for (int i = 3; i < (int)sqrt(a); i += 2)
        {
            if (a%i == 0)
                return false;
        }

    }
    return true;
}
