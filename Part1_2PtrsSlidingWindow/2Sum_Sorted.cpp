#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,target;
    cin>>n>>target;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];

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
    return 0;
}