#include<bits/stdc++.h>
using namespace std;

/* 
You have 2 options =>
    - Either take ith coin
    - Skip ith coin
But before that you have to do 1 thing => "Sorting"
If we do not sort we have to check many more options; but if we
sort it, we can optimize our code & stop early if no solution exists

Input: arr={1,2,3} target=5
Output: 
1 1 1 1 1
1 1 1 2
1 1 3
1 2 2
2 3
*/

void cS(vector<int>& arr, int ind, int target, vector<int>& temp, vector<vector<int>>& ans){
	int n=arr.size();
	if(target == 0){
		ans.push_back(temp);
		return;
	}
	if(ind>=n || target<0) return;
	temp.push_back(arr[ind]);
	cS(arr,ind,target-arr[ind],temp,ans);
	temp.pop_back();
	cS(arr,ind+1,target,temp,ans);
	return;
}

int main(){
	vector<vector<int>> ans;
	vector<int> temp;
	vector<int> arr = {1, 2, 3};
	int target = 5;
	cS(arr, 0, target, temp, ans);
	for(auto x: ans){
		for(auto y: x){
			cout << y << " ";
		}
		cout << endl;
	}
}
