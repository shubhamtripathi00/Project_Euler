//
//  main.cpp
//  Project Euler
//
//  Created by Shubham Tripathi on 16/08/22.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int sum_of_multiples_of_3;
    int sum_of_multiples_of_5;
    int sum_of_multiples_of_15;
    int sum_of_multiples_of_3_and_5;
    
    sum_of_multiples_of_3 = 3*((333/2)*(1+333));
    sum_of_multiples_of_5 = 5*((199/2)*(1+199));
    sum_of_multiples_of_15 = 15*((66/2)*(1+66));
    
    sum_of_multiples_of_3_and_5 = sum_of_multiples_of_5 + sum_of_multiples_of_3 - sum_of_multiples_of_15;
    
    cout<< sum_of_multiples_of_3_and_5<< endl;
    
    

    return 0;
}
