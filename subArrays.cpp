#include <bits/stdc++.h>
using namespace std;
#define fr(n)          for(int i=0;i<n;i++)
#define fr1(a,b)       for(int i=a;i<b;i++)
#define fr2(i,a,b)     for(int i=a;i<b;i++)

int mxSubArraySum(int* arr, int n){
    int mx=0;
    fr(n){
        fr2(j,0,n){
            int currSum=0;
            fr2(k,i,j+1) currSum+=arr[k];
            mx=max(mx,currSum);
        }
    }
    return mx;
}

int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    cout<<mxSubArraySum(arr,n);
    return 0;
}