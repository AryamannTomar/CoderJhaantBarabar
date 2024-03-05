#include<bits/stdc++.h>
using namespace std;

bool BinarySearch(vector<int> arr, int target){
    int i=0,j=arr.size()-1;
    while(i<=j){
        int mid=i+(j-i)/2;
        if(arr[mid]==target) return true;
        else if(arr[mid]<target) i=mid+1;
        else if(arr[mid]>target) j=mid-1;
    }  
    return false;
}

int main(){
    vector<int> arr={1,2,3,4,7};
    cout<<BinarySearch(arr,5);    
    return 0;
}