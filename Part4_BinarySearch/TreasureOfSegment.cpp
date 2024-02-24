#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<pair<int,int>>seg(n);
    vector<int>l(n),r(n);
    for(int i=0;i<n;i++){
        cin>>seg[i].first>>seg[i].second;
        l[i]=seg[i].first;
        r[i]=seg[i].second;
    }


    // sort the left & right points vector
    sort(l.begin(),l.end());
    sort(r.begin(),r.end());

    // initalize the maximum ans
    int ans =n-1;

    // binary search for each segment and minimize the ans
    for(int i=0;i<n;i++){
        int right_half = lower_bound(l.begin(),l.end(),seg[i].second+1)-l.begin();
        int left_half = lower_bound(r.begin(),r.end(),seg[i].first)-r.begin();
        ans = min(ans,n-right_half + left_half);
    }
    cout<<ans<<"\n";
    return 0;
}