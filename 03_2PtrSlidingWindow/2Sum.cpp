#include<bits/stdc++.h>
using namespace std;

/*
Input: 6 8 
1 2 7 9 10 13
Output: 0 2 
*/

void Sum2(int n, int target, vector<int>& a){
    int start=0,end=n-1;
    while(start<end){
        if(a[start]+a[end]>target) end--;
        else if(a[start]+a[end]<target) start++;
        else{
            cout<<start<<" "<<end<<"\n";
            return;
        }
    }
    cout<< -1<<" "<< -1<<"\n";
}

int main(){
    int n,target;
    cin>>n>>target;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    Sum2(n, target, a);
    return 0;
}