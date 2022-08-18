//
//  main.cpp
//  Project Euler
//
//  Created by Shubham Tripathi on 16/08/22.
//

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

long HighestPrimeFactor(long x)
{
    long n = x;
    int i = 2;
    while (i*i < n)
    {
        while (n % i == 0) {
            n = n/i;
        }
        i = i + 1;
    }
   
    return n;
};

string int_to_string (int y) {

stringstream ps;
ps << y;
string ss_y = ps.str();
    
    return ss_y;
};


long ReverseNumber(long z){

    long reverse = 0;
    
    while (z != 0) {
        long remainder = z%10;
        reverse = reverse * 10 + remainder;
        z = z/10;
    }
    
    return reverse;
    
};

int IsPalindrome(long q){
    
    long reverse_number = ReverseNumber(long(q));
    
    if (q == reverse_number) {
      //  cout<<"It's a Palindorome!"<<endl;
        return 1;
    }
    else{
        //cout<<"It is not a Palindrome."<<endl;
        return -1;
    }
}



int main(int argc, const char * argv[]) {
    
    long palindrome = 0;
    long max_palindrome = 0;
    
    for (int i=100;i <= 999; i++) {
        
        for (int j = 100; j <=999; j++) {
            
            palindrome = j * i;
            if (IsPalindrome(long(palindrome)) == 1) {
                cout<<palindrome<<" It's a Palindrome."<<endl;
                if (max_palindrome < palindrome) {
                    max_palindrome = palindrome;
                } else {
                    continue;
                }
            }
            else (IsPalindrome(long(palindrome)) == -1);{
                cout<<palindrome<<" It's not a Palindrome."<<endl;
            }
            
        }
        
    }

    cout<<max_palindrome<<endl;
 
    return 0;
}

