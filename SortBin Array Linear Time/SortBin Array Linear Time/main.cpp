//
//  main.cpp
//  SortBin Array Linear Time
//
//  Created by Mac on 3/3/20.
//  Copyright © 2020 Mac. All rights reserved.
//

#include <stdio.h>

// Function to sort binary array in linear time
int sort(int A[], int n)
{
    // k stores index of next available position
    int k = 0;

    // do for each element
    for (int i = 0; i < n; i++)
    {
        // if current element is one, put 0
        // position in the array
        if (A[i] == 1) {
            A[i] = 0;
            k++;
        }
    }
    
    printf("3:%d\n", k);

    // fill all remaining indices by 1
    int startIndex = n - k;
    for (int i = 0; i< k; i++) {
        int indexOf1s = startIndex + i;
        A[indexOf1s] = 1;
    }
    return 0;
}

// Sort binary array in linear time
int main(void)
{
    int A[] = { 0, 0, 1, 0, 1, 1, 0, 1, 0, 0,1, 0, 1, 0, 1, 1, 0, 1, 0, 1,0, 0, 1, 0, 1, 1, 0, 1, 0, 0,0, 0, 1, 0, 1, 1, 0, 1, 0, 0,1, 0, 1, 0, 1, 1, 0, 1, 0, 1,0, 0, 1, 0, 1, 1, 0, 1, 0, 0,0, 0, 1, 0, 1, 1, 1, 0, 1, 1, 0, 1, 0, 0,1, 0, 1, 0, 1, 0, 0,1, 0, 1, 0, 1, 1, 0, 1, 0, 1,0, 0, 1, 0, 1, 1, 0, 1, 0, 0 ,0, 0, 1, 0, 1, 1, 0, 1, 0, 0,1, 0, 1, 0, 1, 1, 0, 1, 0, 1,0, 0, 1, 0, 1, 1, 0, 1, 0, 0,0, 0, 1, 0, 1, 1, 0, 1, 0, 0,1, 0, 1, 0, 1, 1, 0, 1, 0, 1,0, 0, 1, 0, 1, 1, 0, 1, 0, 0,0, 0, 1, 0, 1, 1, 1, 0, 1, 1, 0, 1, 0, 0,1, 0, 1, 0, 1, 0, 0,1, 0, 1, 0, 1, 1, 0, 1, 0, 1,0, 0, 1, 0, 1, 1, 0, 1, 0, 0};
    int n = sizeof(A)/sizeof(A[0]);

    sort(A, n);

    // print the rearranged array
    for (int i = 0 ; i < n; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}
