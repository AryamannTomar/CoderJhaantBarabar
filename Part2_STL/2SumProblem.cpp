#include<bits/stdc++.h>
using namespace std;

/*
Print Indexes of Pairs their Sum = K
Input: 5 6
1 2 1 3 4
Output: 
1 4
*/

int main() {
    int n,target;
    cin>>n>>target;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    
    map<int,int>mp;   
    for(int i=0;i<n;i++){
        if(mp.count(target-a[i])==0){
            mp[a[i]]=i;
        }
        else{
            cout<<i<<" "<<mp[target-a[i]];
            return 0;
        }
    }
    cout<< -1<<" "<< -1;
}