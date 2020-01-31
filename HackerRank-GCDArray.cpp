//
//  main.cpp
//  GCDArray
//
//  Created by Jamshed on 26/12/19.
//  Copyright © 2019 Jamshed. All rights reserved.
//


// C++ Code to find pair with
// maximum GCD in an array
#include <stdio.h>

unsigned gcd(unsigned x, unsigned y){
    unsigned wk;
    if(x<y){ wk=x;x=y;y=wk; }
    while(y){
        wk = x%y;
        x=y;
        y=wk;
    }
    return x;
}

int gcd_a(int n, int a[n]){
    if(n==1) return a[0];
    if(n==2) return gcd(a[0], a[1]);
    int h = n / 2;
    return gcd(gcd_a(h, &a[0]), gcd_a(n - h, &a[h]));
}

int main(void){
    int A[10]={112, 160, 180, 240, 288, 32, 480, 96, 60, 72};
    int size_A = sizeof(A)/sizeof(*A);
    int gcd = gcd_a(size_A, A);
    printf("%d\n", gcd);
    return 0;
}
