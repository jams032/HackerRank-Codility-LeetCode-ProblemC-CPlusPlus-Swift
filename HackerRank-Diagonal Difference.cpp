//
//  main.cpp
//  HackerRank-Diagonal Difference
//
//  Created by Jamshed on 31/1/20.
//  Copyright © 2020 Jamshed. All rights reserved.
//

#include <stdio.h>
#include <cstdlib>

int main()
{
    
    int i,j, n ;
    int left_to_rightSum=0;
    int right_to_leftSum=0;
    
    scanf("%d", &n);
    
    /* Input elements in array */
    for(i=0; i<n; i++) {
        for(j= 0; j<n; j++) {
            
            int newInput;
            
            scanf("%d", &newInput);
            // main diagonal number
            if ( i == j ) {
                left_to_rightSum = left_to_rightSum + newInput;
            }
            // Second diagonal number
            if ( i + j == n - 1 ) {
                right_to_leftSum = right_to_leftSum + newInput;
            }
            
            if (i == n -1 && j == n - 1) {
                printf("%d", abs(left_to_rightSum - right_to_leftSum));
                break;
            }
        }
    }
    return 0;
}
