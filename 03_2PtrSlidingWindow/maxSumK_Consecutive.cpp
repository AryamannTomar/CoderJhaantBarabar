#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int maxi=0;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    if(k>n || k<=0){
        cout<<"invalid input!"<<"\n";
        return;
    }

    int curr_total=0;
    for(int i=0;i<n;i++){
        if(i<k) curr_total+=a[i];
        if(i==k-1) maxi=max(maxi,curr_total);
        else if(i>=k){
            curr_total+=a[i];
            curr_total-=a[i-k];
            maxi=max(maxi,curr_total);
        }
    }
    cout<<maxi<<"\n";
    return 0;
}