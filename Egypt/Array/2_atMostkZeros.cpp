#include <bits/stdc++.h>
using namespace std;
#define F              first
#define S              second
#define pb             push_back
#define si             set <int>
#define vi             vector <int>
#define pii            pair <int, int>
#define vpi            vector <pii>
#define vpp            vector <pair<int, pii>>
#define mii            map <int, int>
#define mpi            map <pii, int>
#define spi            set <pii>
#define sz(x)          ((int) x.size())
#define all(p)         p.begin(), p.end()
#define que_max        priority_queue <int>
#define que_min        priority_queue <int, vi, greater<int>>
#define bug(...)       __f (#__VA_ARGS__, __VA_ARGS__)
#define fr(n)          for(int i=0;i<n;i++)
#define fr1(a,b)       for(int i=a;i<b;i++)
#define fr2(i,a,b)     for(int i=a;i<b;i++)
#define ll         	long long
#define double         long double
#define print(a)       for(auto x:a) cout << x << ' '; cout << endl
#define print1(a)      for(auto x:a) cout << x.F << ' ' << x.S << endl
#define print2(a,x,y)  for(int i=x;i<y;i++) cout<< a[i] << ' '; cout << endl
#define print3(a)      for(auto x:ans){for(auto y:x) cout << y << ' '; cout << endl;}

/* Sliding Window
Style 1
    - Window Length remains constant only the first and last elements are changed

Style 2
    Single Moving Window
        - Keep expanding its end as long as possible 
        - Once you expand the end side, start from start side(start=start+1) till we have a valid window
        - This is usually O(n);

vector<int> arr={1,1,0,1,1,0,1,1,1,1,0,0};
*/

int longestOnes(vector<int> &arr, int k){
    int len=0,n=arr.size();
    fr(n){
        for(int j=i, zeros=0;j<n;j++){
            // int zeros=0;
            // for(int t=i;t<=j;t++) zeros+=arr[t]==0;
            zeros+=arr[j]==0;
            if(zeros<=k) len=max(len,j-i+1);
            else break;
        }
    }
    return len;
}

int longestOnes_v1(vector<int>& arr, int k){
    int len=0,n=arr.size();
    for(int i=0,j=0;j<n;j++){
        int zeros=0;
        if(arr[j]==0){
            zeros++;
            while(zeros>k){
                zeros-=arr[i]==k;
                i++;
            }
            len=max(len,j-i+1]);
        }
    }
}

int main(){
    
    return 0;
}