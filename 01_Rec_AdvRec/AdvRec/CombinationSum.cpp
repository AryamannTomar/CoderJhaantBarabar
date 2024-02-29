#include<bits/stdc++.h>
using namespace std;

/* 
You have 2 options =>
    - Either take ith coin
    - Skip ith coin
But before that you have to do 1 thing => "Sorting"
If we do not sort we have to check many more options; but if we
sort it, we can optimize our code & stop early if no solution exists

Input: arr={1,2,3} b=5
Output: 
1 1 1 1 1
1 1 1 2
1 1 3
1 2 2
2 3
*/

void CombinationSum(vector<int>& arr, int ind, int target, vector<int>& temp, vector<vector<int>>& ans){
    int n=arr.size();
    // Combination Sum is Found
    if(target==0){
        ans.push_back(temp);
        return;
    }
    // Combination Sum Not Found
    if(ind>=n || target-arr[ind]<0) return;
    // Pick the ith Element
    temp.push_back(arr[ind]);
    CombinationSum(arr,ind,target-arr[ind], temp, ans);
    // Dont pick the ith Element
    temp.pop_back();
    CombinationSum(arr,ind+1,target,temp,ans);
    return;
}