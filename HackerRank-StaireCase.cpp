//
//  main.cpp
//  HackerRank-StaireCase
//
//  Created by Jamshed on 1/2/20.
//  Copyright © 2020 Jamshed. All rights reserved.
//

#include <stdio.h>

int main()
{
    int i, j, k, totalInput;
    
    scanf("%d",&totalInput);
    
    if ( totalInput <= 100 ) {

        for(i=0; i<totalInput; i++)
        {
            for(j=i; j<totalInput-1; j++)
            {
                printf(" ");
            }
            
            for(k=i+1; k>0; k--)
            {
                printf("#");
            }
            
            printf("\n");
        }
    }
    return 0;
}
