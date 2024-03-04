#include<bits/stdc++.h>
using namespace std;

/*
Question:
Suppose the chessboard is not square but with variable no of columns and with each row offset 0 or more columns to the right of the row above it
How many of the Squares in such a modified chessboard can a horse/knight starting for upper left not reach in any number of moves without resting in any square more than once.
=================================================================================================================================================================================

At the end we have the count of how many blocks we can land upon, Total blocks we have travelled upon - total blocks we have =>
Global Variable - Maximum Number Of positions I have stored

Time Complexity: O(7^(total_num_of_blocks))
Space Complexity: O(total_num_of_blocks)+O(total_num_of_blocks)


int gMax=0
ValidMoves(x,y,grid,vis,total){
    // BaseCondition
    if(total>gMax) gMax=total;
    for(move over all 8 positions){
        if(Valid(X,Y) and vis[X][Y]==false){
            vis[X][Y]=true;
            validMoves(X,Y,vis,total+1);
            vis[X][Y]=false;
        }
    } 

}

Input: Offset and number of Blocks
7 03 03 04 04 13 17 44
Output:
?

Trick:
If the knight reaches a valid square box even if it goes out of bound, it is a valid path. xD
*/