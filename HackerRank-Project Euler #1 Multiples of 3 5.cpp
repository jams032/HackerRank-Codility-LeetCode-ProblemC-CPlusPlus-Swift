//
//  main.cpp
//  HackerRank-Project Euler #1: Multiples of 3.5
//
//  Created by Jamshed on 7/2/20.
//  Copyright © 2020 Jamshed. All rights reserved.
//
/*
// triangular number: `sum{x}=1+2+..+x = x*(x+1)/2` / Following approach could be a solution.
long long sum(unsigned long long x)
{
  return x * (x + 1) / 2;
}
 
// 3*sum(n/3) + 5*sum(n/5) - 15*sum(n/15) // minus part is for removing duplicates
*/


#include <stdio.h>

int main()
{

    int testCase;
    scanf("%d",&testCase);

    for(int i = 0; i < testCase; i++){
      unsigned long long multipleOf_5, multipleOf_3, multipleOf_15, n, sum=0;
        
        scanf("%lld",&n);

        multipleOf_3 = 3 * ( (n-1)/3 * ( (n-1)/3+1))/2;
        multipleOf_5 = 5 * ( (n-1)/5 * ( (n-1)/5+1))/2;
        multipleOf_15 = 15 * ( (n-1)/15 * ( (n-1)/15+1))/2;
        sum = multipleOf_5 + multipleOf_3 - multipleOf_15; // AP of 3 and 5 minus 15 to remove duplicates
        printf("%lld\n",sum);
    }
    
  return 0;
}

