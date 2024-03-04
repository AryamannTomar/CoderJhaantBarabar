#include<bits/stdc++.h>
using namespace std;

/*
Input: N=2
n=2
11
11
n=2
10
11
Output:
DR RD
DR

Time Complexity: O(3^(n^2))
Space Complexity: O(n^2) + stackSpace (in which this recursive call is stored) = O(n^2)

Notes:
Recursion we cannot travel on the blocks that are 0 bcoz they are the blocked blocks
AllValidPaths(x,y,path,allPaths, visited, grid){
    if (grid[x][y]==0) return;
    if(x==n-1 && y==n-1) insert currPath inside allPaths return;
    vis[x][y]==true;

    // Move in all 4 Directions keeping in mind Should not be OutOfBound and NotVisited
    for(over all 4 directions from curr block){
        // Capital X, Y are the new blocks 
        if(validMove(X,Y)){ 
            Path+=directionOfMove
            AllvalidPaths(X,Y,path,allPaths,visited,grid);
            Path-=directionOfMove
        }
    }
    vis[x][y]=false
}
*/

int main(){
    
    return 0;
}