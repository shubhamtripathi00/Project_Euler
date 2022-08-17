//
//  main.cpp
//  Project Euler
//
//  Created by Shubham Tripathi on 16/08/22.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
   
    int x = 0;
    int y = 1;
    int z;
    int sum = 0;
    
    do{
        z = x + y;
        x = y;
        y = z;
        
        if (y % 2 == 0) {
            sum += y;
        }
    }while(y<4000000);
    
    cout<<sum<<endl;
   
    return 0;
}
