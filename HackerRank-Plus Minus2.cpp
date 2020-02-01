//
//  main.cpp
//  HackerRank-Plus Minus-2
//
//  Created by Jamshed on 1/2/20.
//  Copyright © 2020 Jamshed. All rights reserved.
//

#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int i, totalInput;
    double positive = 0.00;
    double negative = 0.00;
    double zeros = 0.00;
    
    scanf("%d",&totalInput);
    
    /* Input elements in array */
    for(i=0; i<totalInput; i++)
    {
        int newInput;
        scanf("%d", &newInput);
        
        //Zeros
        if (newInput == 0) {
            zeros = zeros + 1.00;
        } else if (newInput > 0) { // positive
            positive = positive + 1.00;
        } else if (newInput < 0) { // negative
            negative = negative + 1.00;
        }
    }
    
    printf("%.6f\n", positive/totalInput);
    printf("%.6f\n", negative/totalInput);
    printf("%.6f\n", zeros/totalInput);

    return 0;
}
