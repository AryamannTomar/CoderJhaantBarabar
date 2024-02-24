#include<bits/stdc++.h>
using namespace std;

bool check(vector<int>&barn, int k,int mid){
    int total=1;
    int last =0;
    int n = barn.size();
    for(int i=1;i<n;i++){
        if(barn[i]- barn[last] >=mid){
            total++;
            last=i;
        }
    }
    return (total>=k);
}

int main(){
    int n,k;
    cin>>n>>k;
    vector<int>barn(n);
    for(int i=0;i<n;i++) cin>>barn[i];

    sort(barn.begin(),barn.end());
    // binary search
    int l=1,r=1e9+5;
    int ans = 1e9+5;
    while(l<=r){
        int mid = l+(r-l)/2;
        if(check(barn,k,mid)==true){
            ans = mid;
            l = mid+1;
        }
        else{
            r = mid-1;
        }
    }
    cout<<ans<<"\n";   
    return 0;
}