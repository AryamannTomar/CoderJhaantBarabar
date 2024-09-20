#include<bits/stdc++.h>
using namespace std;

/*
How Many Inversions will it take to make this arr Sorted?
Brute Force Approach: O(N^2)
Input: 2 3 5 4 1 6
Output: 
*/

long long merge(vector<int>& arr,int s,int mid,int e){
    vector<int>l,r;
    for(int i=s;i<=mid;i++) l.push_back(arr[i]);
    for(int i=mid+1;i<=e;i++) r.push_back(arr[i]);
    long long total=0;
    int n=l.size();
    int m=r.size();
    int l_ptr=0;
    int r_ptr=0;
    int curr=s;
    while(l_ptr<n && r_ptr<m){
        if(l[l_ptr]<=r[r_ptr]) arr[curr++]=l[l_ptr++];
        else{
            arr[curr++]=r[r_ptr++];
            total+=(n-l_ptr);
        }
    }
    while(l_ptr<n) arr[curr++]=l[l_ptr++];
    while(r_ptr<m) arr[curr++]=r[r_ptr++];
    return total;
}

long long countInversion(vector<int>& arr,int s,int e){
    if(s>=e) return 0;
    int mid=(s+e)/2;
    long long total=0;
    total+=countInversion(arr,s,mid);
    total+=countInversion(arr,mid+1,e);
    total+=merge(arr,s,mid,e);
    return total;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<countInversion(arr,0,n-1);
    return 0;
}