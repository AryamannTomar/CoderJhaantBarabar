#include<bits/stdc++.h>
using namespace std;

/*
Next greater Element for an element x, is the first greater element on right side of x in the array
Input:  9 10 2 3 4 
Output: 10 -1 3 4 -1   
*/

int main() {
   int n;
   cin>>n;
   vector<int>a(n);
   vector<int>b(n); 
   for(int i=0;i<n;i++) cin>>a[i];
   
   stack<int>s;
   for(int i=n-1;i>=0;i--){
       if(s.empty()){
           b[i]=-1;
           s.push(a[i]);
       }
       else{
           while(!s.empty() && s.top()<=a[i]) s.pop();
           if(s.empty()){
               b[i]=-1;
               s.push(a[i]);
           }
           else{
               b[i]=s.top();
               s.push(a[i]);
           }
       }
   }
   
   for(int i=0;i<n;i++) cout<<b[i]<<" ";
}