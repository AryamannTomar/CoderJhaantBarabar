#include<bits/stdc++.h>
using namespace std;

/*
Input: 6 8 
1 2 7 9 10 13
Output: 0 2 
*/

void Sum2(vector<int>& a, int target){
    int start=0,end=a.size()-1;
    while(start<end){
        if(a[start]+a[end]>target) end--;
        else if(a[start]+a[end]<target) start++;
        else{
            cout<<start<<" "<<end;
            return;
        }
    }
    cout<< -1<<" "<< -1;
}

void Sum2_Map(vector<int>& a, int target){
    map<int,int> mp;   
    for(int i=0;i<a.size();i++){
        if(mp.count(target-a[i])==0){
            mp[a[i]]=i;
        }
        else{
            cout<<i<<" "<<mp[target-a[i]];
            return;
        }
    }
    cout<< -1<<" "<< -1;
}