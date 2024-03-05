#include<bits/stdc++.h>
using namespace std;

/*
LoL! If you haven't done this problem then it is said that you haven't done binarySearch at All ..... 
In Step Functions, if you do not move your pointers correctly, you might lead to Infinite Loops and thus it is better to take Ans variable
Input: 5 2 
4 2 1 3 6
Output:
3
*/

bool check(vector<int>&arr,int k,int mid){
    int total=1; // Total Cows Placed
    int last=0;
    int n=arr.size();
    for(int i=1;i<n;i++){
        if(arr[i]-arr[last]>=mid){
            total++;
            last=i;
        }
    }
    return (total>=k);
}

int main(){
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr.begin(),arr.end());
    int i=1,j=1e9+5;
    int ans = 1e9+5;
    while(i<=j){
        int mid=i+(j-i)/2;
        if(check(arr,k,mid)==true){
            ans=mid;
            i=mid+1;
        }
        else j=mid-1;
    }
    cout<<ans<<"\n";   
    return 0;
}