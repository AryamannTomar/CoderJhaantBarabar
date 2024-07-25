#include<bits/stdc++.h>
using namespace std;

/*
Returns Sum of a Vector through Recursion 
Input: 4 
1 2 3 4
Output: 10
*/

int SumOfVec(vector<int> arr, int ind){
    int n=arr.size();
    if (ind==n) return 0;
    return arr[ind]+SumOfVec(arr,ind+1);
}