//
//  main.cpp
//  Compare Triplet
//
//  Created by Jamshed on 31/1/20.
//  Copyright © 2020 Jamshed. All rights reserved.

#include <stdio.h>
#define MAX_SIZE 3

int main()
{
    int arr1[MAX_SIZE],arr2[MAX_SIZE];
    int i;
    
    /* Input elements in array */
    for(i=0; i<3; i++)
    {
        scanf("%d", &arr1[i]);
    }
    
    /* Input elements in array */
    for(i=0; i<3; i++)
    {
        scanf("%d", &arr2[i]);
    }
    
    int pointAlice = 0;
    int pointBobs = 0;
    
    for(i=0; i<3; i++)
    {
        if (arr1[i] > arr2[i]) {
            pointAlice++;
        } else if (arr1[i] < arr2[i]) {
                pointBobs++;
        }
    }
    
    printf("%d %d\n", pointAlice,pointBobs);

    return 0;
}
