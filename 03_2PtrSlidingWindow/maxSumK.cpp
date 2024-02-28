#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define LL_MIN -1e18

/*
Print Indexes of Pairs their Sum = K
Input: 5 3
4 2 7 8 2
Output: 
17
*/

void maxSumK(int n, int k, vector<ll>& a){
    ll maxi=LL_MIN;
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
    cout<<maxi<<"\n";
}

int main(){
    int n,k;
    cin>>n>>k;
    vector<ll>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    maxSumK(n,k,a);
    return 0;
}