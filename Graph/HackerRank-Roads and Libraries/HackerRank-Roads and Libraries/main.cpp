//
//  main.cpp
//  HackerRank-Roads and Libraries
//
//  Created by jamshed alam Mac on 5/14/20.
//  Copyright © 2020 Mac. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

void DFS(int source , bool visited[], vector<int>cities[]) {

    visited[source] = true;
    for(int index = 0; index < cities[source].size(); index++) {
        if (visited[cities[source][index]] == false) {
            DFS(cities[source][index], visited, cities);
        }
    }
    
}

int main() {
    int q;
    cin >> q;
    
    for(int qIndex = 0; qIndex < q; qIndex++){
        int city, library;
        long cityCost, roadCost;
        cin >> city >> library >> cityCost >> roadCost;
        
        vector<int>cities[city+1];
        bool visited[city+1];
        long connectedComponents = 0;
        
        // nodes input// library connection to cities is done
        for (int a1 = 0; a1< library; a1++) {
            int city1, city2;
            cin >> city1 >> city2;
            cities[city1].push_back(city2);
            cities[city2].push_back(city1);
        }
        
        if (roadCost >= cityCost) {
            cout << city*cityCost<<endl;
        } else {
            for (int i =0; i< city + 1; i++)
                visited[i] = false;
            
            for (int j = 1 ; j<= city; j++ ) {
                if (visited[j] == false ) {
                    // new component;  call DFS and mark visited, so that next call found this true
                    DFS(j, visited, cities);
                    connectedComponents++;
                }
            }
            
            cout << roadCost*(city - connectedComponents) + cityCost*connectedComponents << endl;
        }
    }
    
    return 0;
}
