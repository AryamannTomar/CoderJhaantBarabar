#include<bits/stdc++.h>
using namespace std;

int Partition(vector<int>& a, int left , int right){
    int pivot = left;
    int end = a[right];
    
    for(int i=left;i<right;i++){
        if(a[i]<=end){
            swap(a[pivot],a[i]);
            pivot++;
        }
    }
    swap(a[pivot],a[right]);
    return pivot;
}

void QuickSort(vector<int>& a, int left , int right){
    if(left>=right) return;
    int pivot = Partition(a,left,right);
    QuickSort(a,left,pivot-1);
    QuickSort(a,pivot+1,right);
}


int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    QuickSort(a,0,n-1);
    for(int i=0;i<n;i++) cout<<a[i]<<" ";    
    return 0;
}