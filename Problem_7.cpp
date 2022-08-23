
//
//  main.cpp
//  Project Euler
//
//  Created by Shubham Tripathi on 16/08/22.
//

#include <iostream>

using namespace std;\

bool isPrime(long n)
{
    if (n<=1) {
        return false;
    }
    if (n == 2) {
        return true;
    }
    if (n%2 == 0) {
        return false;
    }
    int counter = 3;
    
    while ((counter*counter) <= n) {
        if (n%counter == 0) {
            return false;
        }
        else { counter += 2;
            
        }
    }
    return true;
};

int main(int argc, const char * argv[])
{
    long num = 1;
    long numPrime = 1;
    
    while (numPrime < 10001) {
        num += 2;
        if (isPrime(long(num))) {
            numPrime++;
        }
    }
    
    cout<<num<<endl;
}
