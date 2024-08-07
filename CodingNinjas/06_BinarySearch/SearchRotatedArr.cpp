#include<bits/stdc++.h>
using namespace std;

/* 
Theory: PivotPoint (leftEle < PP > rightEle)
Check if midEle satisfya above condn.
If midEle > leftMost ( UpHill ) => Move Right
If midEle < rightMost ( DownHill ) => Move Left  

Input: 4 9
5 6 7 8 1 2 3 4
Output
-1
*/

int bS(vector<int>& arr, int l, int r, int target){
    while(l<=r){
        int mid=l+(r-l)/2;
        if(arr[mid]==target) return mid;
        else if(arr[mid]<target) l=mid+1;
        else r=mid-1;
    }
    return -1;
}

int findLargestEle(vector<int>& arr, int l, int r){
    int n=arr.size();
    while(l<=r){
        int mid=l+(r-l)/2;
        if(mid-1>=0 && mid+1<n && arr[mid-1]<arr[mid] && arr[mid+1]<arr[mid]) return mid;
        else if(mid==0 && mid+1<n && arr[mid+1]<arr[mid]) return 0;
        else if(mid==n-1 && mid-1>=0 && arr[mid-1]<arr[mid]) return n-1;
        if(arr[mid]>=arr[l]) l=mid+1;
        else r=mid-1;
    }
    return -1;
}

int main(){
    int n, x;
    cin>>n>>x;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int pivot=findLargestEle(arr,0,n-1);
    int res1=bS(arr,0,pivot,x);
    int res2=bS(arr,pivot+1,n-1,x);
    if(res1!=-1) cout<<res1<<endl;
    else if(res2!=-1) cout<<res2<<endl;
    else cout<<-1<<endl;
    return 0;
}