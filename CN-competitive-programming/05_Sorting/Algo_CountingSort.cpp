#include<bits/stdc++.h>
using namespace std;
#define ll long long

/*
Time Complexity: O(N)
Space Complexity: O(N)
*/

void countingSort(vector<int> arr){
    int n=arr.size();
    int maxi = *max_element(arr.begin(),arr.end());
    int mini = *min_element(arr.begin(),arr.end());
    vector<int>f(maxi-mini+2);
    for(int i=0;i<n;i++) f[arr[i]-mini]++;      
    for(int i=0;i<f.size();i++){
        for(int j=0;j<f[i];j++){
            cout<<(i+mini)<<" ";
        }
    }
}