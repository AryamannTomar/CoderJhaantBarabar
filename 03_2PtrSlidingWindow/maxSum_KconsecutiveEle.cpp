#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define LL_MIN -1e18

/*
Give me the Max. sum over all the windows present inside an Array  
Input: 5 3
4 2 7 8 2
Output: 17
*/

void maxSumK(vector<ll>& a, int k){
    ll maxi=LL_MIN;
    int n=a.size();
    if(k==0||k>n){
        cout<<"Invalid Output";
        return;
    }
    ll curr_total=0;
    for(int i=0;i<n;i++){
        if(i<k) curr_total+=a[i];
        if(i==k-1) maxi=max(maxi, curr_total);
        else if(i>=k){
            curr_total+=a[i];
            curr_total-=a[i-k];
            maxi=max(maxi,curr_total);
        }
    }
    cout<<maxi;
}