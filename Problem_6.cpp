
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
    
    long difference=0,sum_1=0,y=0,sum_2 = 0;
    
    for (long i=1; i <= 100; i++) {
        y = i*i;
        sum_1 = sum_1 + y;
    }
    
    y = 0;
    
    for (long i=1;i<=100;i++)
    {
        y += i;
    }
    sum_2 = y*y;
    difference = sum_2 - sum_1;
    cout<<"The difference is :"<<difference<<endl;
    
    return 0;
}
