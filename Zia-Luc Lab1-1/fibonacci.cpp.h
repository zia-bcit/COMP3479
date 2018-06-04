//
// Created by Zia Minhas on 2018-06-03.
//

#ifndef LAB_11_FIBONACCI_CPP_H
#define LAB_11_FIBONACCI_CPP_H

#endif //LAB_11_FIBONACCI_CPP_H
#include <iostream>
//function called fibonacci that accepts an integer n and returns the nth fibonacci number.
//@param n to specify nth fibonacci number to retreive
// limitations: this function uses recursion therefore biggest possible parameter for n is 50
// smallest: if the function is given int parameter less than or equal to one it always returns 1
long fibonacci(int n) {

    if(n <= 1) {
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }

}
