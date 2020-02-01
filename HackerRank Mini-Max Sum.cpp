//
//  main.cpp
//  HackerRank Mini-Max Sum
//
//  Created by Jamshed on 1/2/20.
//  Copyright © 2020 Jamshed. All rights reserved.
//

#include <stdio.h>

int main()
{
    int i, min = 0, max = 0;

    long totalSum = 0;
    
    for(i=0; i<5; i++)
    {
            int newInput;
            scanf("%d",&newInput);
        
            totalSum = totalSum + newInput;
        
            if (i == 0) {
                min = newInput;
                max = newInput;
            }
            if (newInput < min) {
                min = newInput;
            }
            if (newInput > max) {
                max = newInput;
            }
    }

    printf("%ld %ld\n",totalSum-max, totalSum-min);
    
    return 0;
}
