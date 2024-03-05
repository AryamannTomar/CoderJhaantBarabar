#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod= 1e9+7;
const ll INF=2e14+10;

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

typedef struct{
    int ymin;
    int ymax;
}LIMIT;


LIMIT row[12];
bool visited[12][12];
int n;
int totalCells=0,okCells=0;


int dirX[] = {-2,-1, 1, 2, 2, 1,-1,-2};
int dirY[] = { 1, 2, 2, 1,-1,-2,-2,-1};


bool isValid(int x, int y){
    if(x<1 || x>n || y< row[x].ymin || y>row[x].ymax) return false;
    return true;
}


void solve(int x, int y, int total){
    // base condition
    if(total>okCells) okCells = total;
    
    for(int i=0;i<8;i++){
        int newX = x + dirX[i];
        int newY = y + dirY[i];
        if(isValid(newX,newY) && visited[newX][newY]==false){
            visited[newX][newY]=true;
            solve(newX,newY,total+1);
            visited[newX][newY]=false;
        }
    }
    return;
}
                
int main(){
    cin>>n;
    int t=1;
    do{
        totalCells=0;
        for(int i=1;i<=n;i++){
            int col,len;
            cin>>col>>len;
            row[i].ymin = col+1;
            row[i].ymax = row[i].ymin + len -1;
            totalCells+=len;
            
            for(int j=row[i].ymin ;j<=row[i].ymax;j++) visited[i][j]=false;
        }
        okCells=0;
        visited[1][1]=true;
        solve(1,1,1);
        cout<<"Case "<<t++ <<", "<<(totalCells-okCells);
        if(totalCells-okCells == 1) cout<<" square can not be reached.";
        else cout<<" squares can not be reached.";
        cout<<"\n";
        cin>>n;
    }while(n!=0);
    return 0;
}