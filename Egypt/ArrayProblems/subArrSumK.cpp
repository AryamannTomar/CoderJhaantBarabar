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
#define ll         	   long long
#define double         long double
#define print(a)       for(auto x:a) cout << x << ' '; cout << endl
#define print1(a)      for(auto x:a) cout << x.F << ' ' << x.S << endl
#define print2(a,x,y)  for(int i=x;i<y;i++) cout<< a[i] << ' '; cout << endl
#define print3(a)      for(auto x:ans){for(auto y:x) cout << y << ' '; cout << endl;}

vector<int> prefix_sum(vector<int>& arr){
    int n=arr.size();
    vector<int> pre=arr;
    fr1(1,n){
        pre[i]+=pre[i-1];
    }
    return pre;
}

int range_sum(vector<int>& pre, int s, int e){
    if(s==0) return pre[e];
    return pre[e]-pre[s-1];
}

//============================================================================================================

int subArrSum(vector<int>& arr, int k){
    int n=arr.size(), res=0;
    vector<int> arr1=prefix_sum(arr);
    fr(n){
        for(int e=i; e<n; e++){
            // int sum=0;
            // for(int idx=i;idx<=e;idx++) sum+=arr[idx];
            // if(sum==k) res++;

            if(range_sum(arr1,i,e)==k) res++;
        }
    }
    return res;
}

int subArrSum_v1(vector<int>& arr, int k){
    int n=arr.size(), res=0, prefix_sum=0;
    unordered_map<int, int> prefix_table;
    prefix_table[0]=1;
    fr(n){
        prefix_sum+=arr[i];
        if(prefix_table.count(prefix_sum-k)) res+=prefix_table[prefix_sum-k];
        prefix_table[prefix_sum]++;
    }
    return res;
}

int main(){
    vector<int> arr={9,-9,2,3,4};
    cout<<subArrSum_v1(arr,9);
    return 0;
}