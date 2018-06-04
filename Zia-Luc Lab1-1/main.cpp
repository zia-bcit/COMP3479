#include <iostream>
#include <string>

#pragma once
#include "fibonacci.cpp.h"
#include "shift.h"
#include "isPrime.h"

using namespace std;

long fibonacci(int n);
int shift(int n1, int n2, bool isShiftLeft);
bool isPrime(int a);


int main() {

    std::cout << "Hello, World!" << std::endl;

    int fibN = 5;
    auto start_time = std::chrono::high_resolution_clock::now();

    cout << fibN << "th fibonacci number is: " << fibonacci(fibN) << endl;

    auto end_time = std::chrono::high_resolution_clock::now();
    auto time = end_time - start_time;

    cout<< std::chrono::duration_cast<std::chrono::microseconds>(time).count() << " microseconds to run.\n";

    int n1 = 4;
    int n2 = 1;
    bool isShiftLeft = true;
    string direction;

    if (isShiftLeft) {
        direction = "Left";
    } else {
        direction = "right";
    }

    cout << direction << " shifted " << n1 << " by " << n2 << ": " << shift(n1, n2, isShiftLeft) << endl;

    int n3{47};
    cout << n3 << " is prime?: " << boolalpha << (isPrime(n3)) << endl ;


    return 0;
}
