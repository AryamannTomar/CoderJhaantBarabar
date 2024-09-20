#include <bits/stdc++.h>
using namespace std;
#define ll long long

/*
Time Complexity: O(n!)
Space Complexity: O(n^2)+O(n)
No Concept of Calling Stack, Max Call Heap O(n)

Approach:
Keep on Filling Queens Up to Down while Traversing Right
Left isSafe -> Safe -> Fill that Position -> Col Filled Back Track -> If all Queens Placed Fill Answer

Pseudo Code:
NQueen(board, col, n, Ans){
	if(col==n){
		push board Ans;
		return;
  	}
	for(int i=0;i<n;i++){
		if (isValid(board, i, col)) board[i][col]=1;
		NQueen(board,col+1,n,ans)
		board[i][col]=0
	}
}
Trick: Make your code faster by getting the mirror image of the first solution you found out
*/


bool isSafe(vector<vector<int>>& chessBoard, int row, int col){
    // check this row on the left
    for(int i=0;i<col;i++) if(chessBoard[row][i]==1) return false;
    // check upper left diagonal
    for(int i=row,j=col;i>=0 && j>=0 ; i--,j--) if(chessBoard[i][j]==1) return false;
    // check lower left diaognal 
    for(int i=row,j=col;i<chessBoard.size() && j>=0;i++,j--) if(chessBoard[i][j]==1) return false;
    // else it is safe to place a queen
    return true;
}

void addSolution(vector<vector<int>>& chessBoard, int n, vector<vector<int>>& ans){
    vector<int>state;
    for(auto i:chessBoard){
        for(auto j:i){
            state.push_back(j);
        }
    }
    ans.push_back(state);
    return;
}


void nQueenHelper(vector<vector<int>>& chessBoard, int col, int n, vector<vector<int>>& ans){
    //base case
    if(col>=n){
        addSolution(chessBoard,n,ans);
        return;
    }
    // iterate over all the rows
    for(int row=0;row<n;row++){
        if(isSafe(chessBoard,row,col)){
            // mark this state with queen
            chessBoard[row][col]=1;
            // recursive all the helper function for next column
            nQueenHelper(chessBoard,col+1,n,ans);
            //backtracking to previous state
            chessBoard[row][col]=0;
        }
    }
    return;
}

int main(){
    int n;
    cin>>n;
    vector<vector<int>>ans;
    vector<vector<int>>chessBoard(n,vector<int>(n,0));
    nQueenHelper(chessBoard,0,n,ans);
    for(auto i:ans){
        for(auto j:i) cout<<j<<" ";
            cout<<"\n";
    }
}