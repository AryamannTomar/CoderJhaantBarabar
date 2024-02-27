#include<bits/stdc++.h>
using namespace std;

/*
Finding the k largest Element in a Vector using a PQ
Input:    5 3
1 2 3 4 5
Output:   3   
*/

int main() {
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    
    priority_queue<int>pq;
    for(int i=0;i<n;i++) pq.push(a[i]);
    
    /* - Printing Top k Elements
    for(int i=0;i<k;i++){
        if(!pq.empty()){
            cout<<pq.top()<<" ";
            pq.pop();
        }
    }
    */

   int i=0;
   while(i<k-1){
    if(!pq.empty()) pq.pop();
    i++;
   }
   cout<<pq.top();
}