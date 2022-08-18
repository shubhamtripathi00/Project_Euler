//
//  main.cpp
//  Project Euler
//
//  Created by Shubham Tripathi on 16/08/22.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    long n = 600851475143;
    int i = 2;
    while (i*i < n)
    {
        while (n % i == 0) {
            n = n/i;
        }
        i = i + 1;
    }
   
    cout<<n<<endl;
    
    return 0;
}
