#include<bits/stdc++.h>
using namespace std;

// Link: https://www.spoj.com/problems/UCI2009D/

bool vis[10][10];
vector<string>mine(10);
set<vector<pair<int,int>>> paths ;
int dirX[] = {0 , 0 , -1 , 1};
int dirY[] = {-1 , 1 , 0 , 0};

bool isSafe(int r, int c, int n, int m){
    return (r>=0 && r<n && c>=0 && c<m);
}

void countOct(int n, int r, int c, int total, vector<pair<int,int>>way){
    //base condition
    if(!isSafe(r,c,n,n) || mine[r][c]=='.' || vis[r][c]==1) return;
    vis[r][c]=1;
    way.push_back({r,c});
    // collected  8 gems
    if(total == 8){
        sort(way.begin(), way.end());
        paths.insert(way);
        vis[r][c]=0;
        return;
    }
    // not collected 8 gems
    for(int i=0;i<4;i++){
        int newR = r + dirX[i];
        int newC = c + dirY[i];
        countOct(n,newR,newC,total+1,way);
    }
    vis[r][c]=0;
}
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>mine[i];
        }
        paths.clear();
        memset(vis,0,sizeof(vis));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                vector<pair<int,int>>way;
                countOct(n,i,j,1,way);
            }
        }
        cout<<paths.size()<<"\n";
    }
    return 0;
} 