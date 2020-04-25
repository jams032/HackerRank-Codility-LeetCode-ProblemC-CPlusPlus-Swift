//
//  main.cpp
//  HackerRank Candies
//
//  Created by Jamshed on 17/4/20.
//  Copyright © 2020 Jamshed. All rights reserved.
//
#include <iostream>
using namespace std;

// main function
int main()
{
    int n ;
    scanf("%d", &n);
    int arr[n];
    int sum = 0;

    for (int start = 0 ; start < n ; start++) {
        scanf("%d", &arr[start]);
    }
    
    int currentValue = 0;
    int prevValue = 0;

    for (int start = 0 ; start < n ; start++) {
        if (currentValue == 0) {
            currentValue =  1;
        } else if (start == n - 1 && arr[start] == arr[start-1]) {
            currentValue = 1;
        } else if (arr[start] == arr[start-1]) {
            currentValue = currentValue + 1;
        } else if (arr[start] >= arr[start-1] && start != n - 1) {
            currentValue = currentValue + 1;
        }
        else if(arr[start] < arr[start-1]  && start != n - 1) {
            currentValue =  1;
        } else if(arr[start] > arr[start-1]  && start == n - 1) {
            currentValue =  currentValue + 1;
        }
        
        sum = sum + currentValue;

        printf("%d - %d ", arr[start],currentValue);
    }
    
    printf("sum :%d", sum);

    return 0;
}
