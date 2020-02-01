//
//  main.cpp
//  HackerRank-BirthDay Cake Candles
//
//  Created by Jamshed on 1/2/20.
//  Copyright © 2020 Jamshed. All rights reserved.
//  We don't need an array to process all the numbers, even sorting is unnessary for the problem; From discussion board.

#include <stdio.h>

int main()
{
    int i, numberOfCandles;
    int totalMaxCandles = 0;
    int maxHeight = 0;
    
    scanf("%d",&numberOfCandles);
    
    for(i=0; i<numberOfCandles; i++)
    {
        int newInput;
        scanf("%d",&newInput);
        
        if ( maxHeight < newInput ) { // reset
            totalMaxCandles = 0;
            maxHeight = newInput;
            totalMaxCandles = totalMaxCandles + 1;
        } else if ( maxHeight == newInput ) { // + 1 for repeating max
            totalMaxCandles = totalMaxCandles + 1;
        }
    }
    
    printf("%d\n",totalMaxCandles);
    return 0;
}
