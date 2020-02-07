//
//  main.cpp
//  Project Euler #2: Even Fibonacci numbers
//
//  Created by Jamshed on 7/2/20.
//  Copyright © 2020 Jamshed. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int testCase;
    scanf("%d",&testCase);
    long long sum = 0 , max=40000000000000000;

    for (int i = 0 ; i< testCase ; i++) {
        
        long long fib,  a =0 , b = 1;
        scanf("%lld",&fib);
        
        if (fib < max) {
            while ( b < fib ) {

                if (b%2 == 0) {
                    sum = sum + b ;
                }
                
                long long newB = a + b;
                a = b ;
                b = newB;
                
               if ( b >= fib )  {
                    printf("%lld\n",sum);
                   sum = 0;
                }
            }
        }
    }
}
