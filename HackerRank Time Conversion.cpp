//
//  main.cpp
//  HackerRank Time Conversion
//
//  Created by Jamshed on 1/2/20.
//  Copyright © 2020 Jamshed. All rights reserved.
//
#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){

    int hour, minute, seconds ;
    char AM_PM[3];
    scanf("%d:%d:%d", &hour, &minute, &seconds);
    scanf("%s",AM_PM);
    
    if (strcmp(AM_PM,"PM")==0 && hour!=12)
        hour = hour + 12 ;
    if (strcmp(AM_PM,"AM")==0 && hour==12)
        hour = 0 ;
    
    printf("%02d:%02d:%02d", hour, minute, seconds) ;
    return 0;
}
