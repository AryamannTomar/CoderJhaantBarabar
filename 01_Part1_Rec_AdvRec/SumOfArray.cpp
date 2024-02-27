#include<bits/stdc++.h>
using namespace std;

/*
Returns Sum of a Vector through Recursion 
Input: 4 
1 2 3 4
Output: 10
*/

int SumOfVec(int curr, vector<int> a){
    int n=a.size();
    if (n==curr) return 0;
    return a[curr]+SumOfVec(curr+1,a);
}

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    cout<<SumOfVec(0,a);
    return 0;
}