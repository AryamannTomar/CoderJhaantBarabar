#include<bits/stdc++.h>
using namespace std;

/*
Finding all Non-Empty Subsets of a given Array
Formulae is: 2**n-1 subsets will be generated

Input: 3
3,4,5
Output:
{3}, {3,4}, {3,4,5}, {3,5}, {4}, {4,5}, {5}
*/

void genSubsets(vector<int>& arr, int i, vector<int>& temp, vector<vector<int>>& ans){
  int n=arr.size();
  if(i>=n){
    if(temp.size()>0) ans.push_back(temp);
    return;
  }
  // Take ith element
  temp.push_back(arr[i]);
  genSubsets(arr,i+1,temp,ans);
  
  // Do not Take ith element
  temp.pop_back();
  genSubsets(arr,i+1,temp,ans);

  return;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr.begin(), arr.end());
    vector<int> temp;
    vector<vector<int>> ans;
    genSubsets(arr,0,temp,ans);
    for(auto i:ans){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}