#include <bits/stdc++.h>
using namespace std;

#define fr(n)          for(int i=0;i<n;i++)
#define fr1(a,b)       for(int i=a;i<b;i++)
#define fr2(i,a,b)     for(int i=a;i<b;i++)

pair<int,int> stairCaseSearch(int arr[][4],int n,int m,int key){
    if(key<arr[0][0] || key>arr[n-1][m-1]) return {-1,-1};
    int i=0, j=m-1;
    while(i<n && j>=0){
        if(arr[i][j]==key) return {i,j};
        else if(key<arr[i][j]) j--;
        else i++;
    }
    return {-1,-1};
}

int main(){
    int arr[][4]={{10,20,30,40},
                  {15,25,35,45},
                  {27,29,37,48},
                  {32,33,39,50}};
    int n=4, m=4;
    auto p=stairCaseSearch(arr,n,m,35);
    cout<<p.first<<","<<p.second;
    return 0;
}