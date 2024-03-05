#include<bits/stdc++.h>
using namespace std;

/*
Time Complexity: O(N.LogN)
Space Complexity: O(1) InPlace Sorting Algorithm
If you do not pick up a good pivot point then it may also be the case of o(N^2)
Individually Sort the elements on their Place (Shift smaller elements to left of X and greater elements to the right of X)
*/

int Partition(vector<int>& arr,int l,int r){
    int pivot = l;
    int end = arr[r];    
    for(int i=l;i<r;i++){
        if(arr[i]<=end){
            swap(arr[pivot],arr[i]);
            pivot++;
        }
    }
    swap(arr[pivot],arr[r]);
    return pivot;
}

void QuickSort(vector<int>& arr,int l,int r){
    if(l>=r) return;
    int pivot = Partition(arr,l,r);
    QuickSort(arr,l,pivot-1);
    QuickSort(arr,pivot+1,r);
}

int main(){
    vector<int> arr={7,8,2,9,4,5};
    int n=arr.size();
    QuickSort(arr,0,n-1);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}