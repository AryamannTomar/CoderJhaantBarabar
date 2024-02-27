#include<bits/stdc++.h>
using namespace std;

int Partition(vector<int>& a, int left , int right){
    int pivot=left;
    int end = a[right];


    for(int i=left;i<right;i++){
        if(a[i]<=end){
            swap(a[i],a[pivot]);
            pivot++;
        }
    }
    swap(a[right],a[pivot]);
    return pivot;
}


int QuickSelect(vector<int>a, int left , int right , int k){
    // base condition
    if(left>=right) return a[left];
    // calculating the pivot element correct position
    int pivot = Partition(a,left,right);
    //checking if pivot element is the kth smallest element
    if(pivot+1 == k) return a[pivot];
    // otherwise look for left or right , depending on k
    else if(pivot+1 > k) return QuickSelect(a,left,pivot-1,k);
    return QuickSelect(a,pivot+1,right,k);
}

int main(){
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    
    //calling Quickselect to print the kth smallest number &
    // kth largest(or n-k+1 th smallest) number
    cout<<QuickSelect(a,0,n-1,k)<<" "<<QuickSelect(a,0,n-1,n-k+1);
    cout<<"\n";    
    return 0;
}