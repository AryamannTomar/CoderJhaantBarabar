#include<bits/stdc++.h>
using namespace std;

/*
Most used Sorting Algorithm. Based On "Divide-and-Conquer".
*/

void merge(vector<int>& arr,int s,int mid,int e){
    vector<int> l,r;
    for(int i=s;i<=mid;i++) l.push_back(arr[i]);
    for(int i=mid+1;i<=e;i++) r.push_back(arr[i]);
    int n=l.size();
    int m=r.size();
    int l_ptr=0;
    int r_ptr=0;
    int curr=s;
    while(l_ptr<n && r_ptr<m){
        if(l[l_ptr]<r[r_ptr]) arr[curr++]=l[l_ptr++];
        else arr[curr++]=r[r_ptr++];
    }
    while(l_ptr<n) arr[curr++]=l[l_ptr++];
    while(r_ptr<m) arr[curr++]=r[r_ptr++];
}

void mergeSort(vector<int>& arr,int s,int e){
    if(s>=e) return;
    int mid=(s+e)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    merge(arr,s,mid,e);
}

int main(){
    vector<int> arr={10,20,12,2,8,4,1,-3,-9,-31};
    int n=arr.size();
    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++) cout<<arr[i]<<",";
    return 0;
}