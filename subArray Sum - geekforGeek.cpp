//
//  main.cpp
//  sum Array
//
//  Created by Jamshed on 29/2/20.
//  Copyright © 2020 Jamshed. All rights reserved.
//

#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

int main () {
    
    int testCase, i, n , target;
    
    scanf("%d\n", &testCase);
    for (int start = 0 ; start < testCase ; start++) {
        
        
        scanf("%d\n", &n);
        
        scanf("%d\n", &target);
        
        int arr[n];
        
        // printf("enter numbers:\n");
        for(i=0; i<n; i++) {
            scanf("%d", &arr[i]);
        }
        
        int sum = 0;
        int startIndexShifted = 0;
        bool matched = false ;

        for(i=0; i<n; i++) {
            
            //calculate sum array
            sum = sum + arr[i];
            
            // break
            if (sum == target) {
                
                printf("sum1:%d , sum got in range start:%d ~ %d\n",sum,arr[startIndexShifted],arr[i]);
                break;
            }

            startIndexShifted = 0;
            while (sum > target) {
                sum = sum - arr [startIndexShifted];
                startIndexShifted = startIndexShifted + 1;

                if (sum == target) {

                    printf("sum2:%d , sum got in start:%d~%d\n",sum,arr[startIndexShifted],arr[i]);
                    matched = true;
                    break;
                }
            }
            
            if (matched) {
                break;
            }
        }
        
        // Break and not found
        if (sum != target) {
            printf("subarray sum not found:%d\n",sum);
        }
    }
    return 0;
}
