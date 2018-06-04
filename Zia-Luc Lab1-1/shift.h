//
// Created by Zia Minhas on 2018-06-03.
//

#ifndef LAB_11_SHIFT_H
#define LAB_11_SHIFT_H

#endif //LAB_11_SHIFT_H


//function that accepts two integers and a boolean. If the boolean is true, bitwise shift the first integer LEFT
// the number of bits specified by the second integer. If the boolean is false, bitwise shift the first integer RIGHT.
int shift(int n1, int n2, bool isShiftLeft) {
    if (isShiftLeft) {
        //while(n2 > 0) {
        n1 <<= n2;
        //--n2;
        //}
    } else {
        n1 >>= n2;
    }
    return n1;
}

