//
//  main.cpp
//  ShortestPathInMaze-BFS approach
//
//  Created by Mac on 3/9/20.
//  Copyright © 2020 Mac. All rights reserved.
//

#include <iostream>
#include <queue>
#include <climits>
#include <cstring>

// Input matix sizes
#define N 10
#define M 10

using namespace std;

//Queue node used in BFS
struct Node
{
    // x, y = matrix cell
    // dist = minimum distance from source
    int x, y, dist;
};

// For 4 possible movement from each cell
int row[] = {-1,0,0,1};
int col[] = {0,-1,1,0};


// function checks if possible to go in the cell
// return false if cell is invalid
bool isValid(int mat[][N], bool visited[][N], int row, int col)
{
    return (row>=0) && (row < M) && col >= 0 && (col < N) && mat[row][col] && !visited[row][col];
}

void BFS(int mat[][N],int i , int j, int x, int y)
{
    
    // define visited cell list
    bool visited[M][N];
    memset(visited, false, sizeof visited);
    
    // create emmpty Queue for BFS traverse
    queue<Node> q;
    
    //now mark all cell visited and push the current cell (start cell first time)
    visited[i][j] = true;
    q.push({i,j,0});
    
    // store longest lentgh is the final length
    int min_dist = INT_MAX;
    
    // till the queue is empty
    while (!q.empty()) {
        
        Node node = q.front();
        q.pop();
        
        // get node values
        int i = node.x, j = node.y , dist = node.dist;
        
        // Node found , break all calculation
        if (i == x && j == y) {
            min_dist = dist;
            break;
        }
        
        // check for all 4 possible movements from current cell
        // and enqueue each valid movement
        for (int k =0; k< 4 ; k++) {
            
            if (isValid(mat, visited, i+ row[k], j+col[k]))
            {
                visited[i+row[k]][j+col[k]] = true ;
                q.push({i+row[k],j+col[k],dist+1});
                cout << "i:" << i + row[k] << ", j:" << j + row[k] << ",dist=" << dist+1 << "\n";
            }
        }
        
    }
    
    if (min_dist != INT_MAX) {
        cout << "Path lentgh:"<< min_dist << "\n";
    } else {
        cout << "Path not found\n";
    }
    
    
}
// Shortest path in a Maze
int main()
{
    // input maze
    int mat[M][N] =
    {
        { 1, 1, 1, 1, 1, 0, 0, 1, 1, 1 },
        { 0, 1, 1, 1, 1, 1, 0, 1, 0, 1 },
        { 0, 0, 1, 0, 1, 1, 1, 0, 0, 1 },
        { 1, 0, 1, 1, 1, 0, 1, 1, 0, 1 },
        { 0, 0, 0, 1, 0, 0, 0, 1, 0, 1 },
        { 1, 0, 1, 1, 1, 0, 0, 1, 1, 0 },
        { 0, 0, 0, 0, 1, 0, 0, 1, 0, 1 },
        { 0, 1, 1, 1, 1, 1, 1, 1, 0, 0 },
        { 1, 1, 1, 1, 1, 0, 0, 1, 1, 1 },
        { 0, 0, 1, 0, 0, 1, 1, 0, 0, 1 },
    };
    
    // now call BFS search for the path with 7,5 destination
    BFS(mat,0,0,7,5);
    
    return 0;
}
