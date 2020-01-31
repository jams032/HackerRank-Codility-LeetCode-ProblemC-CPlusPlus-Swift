//
//  main.cpp
//  Simple Array Sum
//
//  Created by Jamshed on 9/12/19.
//  Copyright © 2019 Jamshed. All rights reserved.
//
#include <stdio.h>
#define MAX_SIZE 1000

int main()
{
    int arr[MAX_SIZE];
    int i, n;
    long sum = 0 ;
    
    /* Input size of the array */
    scanf("%d", &n);

    /* Input elements in array */
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        // Add each array element to sum
        sum += arr[i];
    }

    printf("%ld", sum);

    return 0;
}
