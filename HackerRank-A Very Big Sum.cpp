//
//  main.cpp
//  HackerRank-A Very Big Sum
//
//  Created by Jamshed on 31/1/20.
//  Copyright © 2020 Jamshed. All rights reserved.
//


#include <stdio.h>
#define MAX_SIZE 10

int main()
{
    int arr[MAX_SIZE];
    int i, totalInput;
    long totalSum=0;
    

    scanf("%d",&totalInput);
    
    /* Input elements in array */
    for(i=0; i<totalInput; i++)
    {
        scanf("%d", &arr[i]);
        totalSum = totalSum + arr[i];
    }

    printf("%ld\n", totalSum);
    
    return 0;
}
