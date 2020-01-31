//
//  main.cpp
//  gcd
//
//  Created by Jamshed on 26/12/19.
//  Copyright © 2019 Jamshed. All rights reserved.
//

#include <iostream>

using namespace std;
// Recursive function to return gcd of a and b
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
      
}
   
// Driver program to test above function
int main()
{
    int a = 8, b = 12;
    cout<<"GCD of "<<a<<" and "<<b<<" is "<<gcd(a, b);
    return 0;
}
