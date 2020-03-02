//
//  main.cpp
//  BigIntC++
//
//  Created by Mac on 3/1/20.
//  Copyright © 2020 Mac. All rights reserved.
//

#include <iostream>
#include <vector>
 
int main(){
    int n ;
    std::cin >> n ;
    std::vector <int> ans ;
    ans.push_back(1) ;
    std::vector <int> :: iterator itr ;
 
    for(int i = 2 ; i <= n ; i++){
        for(itr = ans.begin() ; itr != ans.end() ; itr++) {
            *itr *= i ;
            std::cout << "1:" << i << ": " << ans[i] << "\n";
        }
        for(int j = 0 ; j < ans.size() ; j++)
            if(ans[j] >= 10){
                if(j == ans.size() - 1) {
                    ans.push_back(0) ;
                    std::cout << "2:" << j << "\n";

                }
                ans[j+1] = ans[j+1] + (ans[j]/10) ;
                ans[j] = ans[j]%10 ;
                std::cout << "3:" << ans[j+1] << "\n";
                std::cout << "4:" << ans[j] << "\n";


            }
    }
 
    for(int i = ans.size() - 1 ; i > -1 ; i--)
        std::cout << ans[i];
}
