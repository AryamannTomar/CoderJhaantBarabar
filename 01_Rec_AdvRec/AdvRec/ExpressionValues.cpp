#include<bits/stdc++.h>
using namespace std;
#define ll long long
/*
Given 2 Numbers N, X. Check whether by any chance there is a way to put '+' or '-' between those numbers such that the resultant comes out to be X
There is no point of putting the sign before the first number thats why just put the sign from the second element and so on.....
Input: 5 5 
1 2 3 4 5
Output: YES
*/

bool expression(vector<ll> arr, ll k, int ind, ll total){
    int n=arr.size();
    if(ind==n){
        if(total==k) return true;
        else return false;
    }
    bool ans1=expression(arr,k,ind+1,total+arr[ind]);
    if(ans1) return true;
    return expression(arr,k,ind+1,total-arr[ind]);
}

int main(){
    ll n, k;
    cin>>n>>k;
    vector<ll> arr(n);
    for(int i=0; i<n; i++) cin>>arr[i];
    cout<<(expression(arr,k,1,arr[0])==true?"YES":"NO");
    return 0;
}