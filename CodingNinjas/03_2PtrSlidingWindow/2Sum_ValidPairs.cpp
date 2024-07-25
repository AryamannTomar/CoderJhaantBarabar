#include<bits/stdc++.h>
using namespace std;

/*
Input: 6 8 
1 2 7 9 10 13
Output: 0 2 
*/

// 1st Method
void Sum2(vector<int>& arr, int target){
    int start=0,end=arr.size()-1;
    while(start<end){
        if(arr[start]+arr[end]>target) end--;
        else if(arr[start]+arr[end]<target) start++;
        else{
            cout<<start<<" "<<end;
            return;
        }
    }
    cout<< -1<<" "<< -1;
}

// 2nd Method
void Sum2_Map(vector<int>& arr, int target){
    map<int,int> mp;   
    for(int i=0;i<arr.size();i++){
        if(mp.count(target-arr[i])==0){
            mp[arr[i]]=i;
        }
        else{
            cout<<i<<" "<<mp[target-arr[i]];
            return;
        }
    }
    cout<< -1<<" "<< -1;
}