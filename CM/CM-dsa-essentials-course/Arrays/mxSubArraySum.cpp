#include <bits/stdc++.h>
using namespace std;
#define fr(n)          for(int i=0;i<n;i++)
#define fr1(a,b)       for(int i=a;i<b;i++)
#define fr2(i,a,b)     for(int i=a;i<b;i++)

/*
Method - 1 BRUTE FORCE O(n^3)
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

Method - 2 PREFIX SUM ARRAY O(n^2) 
int pS_mxSubArraySum(int* arr, int n){
    int mx=0;
    int ps[n]={0};
    ps[0]=arr[0];
    for(int i=1;i<n;i++) ps[i]=ps[i-1]+arr[i];
    
    fr(n){
        fr2(j,i,n){
            int currSum=i>0?ps[j]-ps[i-1]:ps[j];
            mx=max(mx,currSum);
        }
    }
    return mx;
}
*/

/* 
Method - 3 Kadane's Algorithm O(n)
If your current sum at any point is -ve, Better ignore that sum and move on!

1 doubt
*/

int kadane(int* arr, int n){
    int cs=0, largest=0;
    fr(n){
        cs+=arr[i];
        if(cs<0) cs=0;
        largest=max(largest,cs); // if(cs>largest) largest=cs;
    }
    return largest;
}

int main(){
    int arr[]={-2,3,4,-1,5,-12,6,1,3,2};
    int n=sizeof(arr)/sizeof(int);
    cout<<kadane(arr, n);
    return 0;
}