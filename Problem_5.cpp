
//
//  main.cpp
//  Project Euler
//
//  Created by Shubham Tripathi on 16/08/22.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    
    long i = 1;
     
    while (i %  11 != 0 || i %  13 != 0 || i %  14 != 0 || i %  16 != 0 ||
             i %  17 != 0 || i %  18 != 0 || i %  19 != 0 || i %  20 != 0){
        i++;
    }
    
    cout<<i<<endl;
    
    return 0;
}
