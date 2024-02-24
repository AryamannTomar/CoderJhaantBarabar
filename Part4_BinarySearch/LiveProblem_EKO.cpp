#include<bits/stdc++.h>
using namespace std;

bool check(vector<long long>&tree, long long m, long long mid){
    int n = tree.size();
    long long total = 0;
    for(int i=0;i<n;i++){
        if(tree[i]-mid>0) total+=(tree[i]-mid);
    }
    return total>=m;
}

int main(){
    long long n,m;
    cin>>n>>m;
    vector<long long>tree(n);
    for(int i=0;i<n;i++) cin>>tree[i];
    sort(tree.begin(),tree.end());
    long long left = 1, right = *max_element(tree.begin(),tree.end());
    long long ans = 0;
    while(left<=right){
        long long mid = left + (right-left)/2;
        if(check(tree,m,mid)){
            ans = mid;
            left = mid+1;
        }
        else{
            right = mid-1;
        }
    }
    cout<<ans;
    return 0;
}